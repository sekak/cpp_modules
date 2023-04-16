

#include "phonebook.hpp"

Phonebook::Phonebook()
{
    std::cout << "welcome to 100s contact."<< "\n"<< "\n";
}

Phonebook::~Phonebook()
{
    std::cout << "See you soon!";
}

void Phonebook::add()
{
    std::string str;
    str = "";
    while (str == "")
    {
        std::cout << "Enter you first name: ";
        std::cin >> str;
        if(str != "")
             this->_contact[this->_index % 8].set_name(str);
       
    }
    str = "";

    while (str == "")
    {
        std::cout << "Enter you last name: ";
         std::cin >> str;
        if(str != "")
             this->_contact[this->_index % 8].set_last(str);
       
    }
    str = "";

    while (str == "")
    {
        std::cout << "Enter your num phone: ";
         std::cin >> str;
        if(str != "")
             this->_contact[this->_index % 8].set_phonenumber(str);
     
    }

    str = "";

    while (str == "")
    {
        std::cout << "Enter your num nickname: ";
         std::cin >> str;
        if(str != "")
             this->_contact[this->_index % 8].set_nickname(str);
   
    }
    this->_index++;
}

std::string handle_str(std::string str)
{
    int i = 0;
    int j = 0;
    std::string temp = str;
    while(str[i])
        i++;
    int diff = 10 - i;
    if(diff >= 0)
    {
        while(diff > 0)
        {
            std::cout << " ";
            diff--;
        }
    }
    else
    {
         str = str.substr(0,9);
         str = str.append(".");
     }
    return(str);
}

int handle_int(int d)
{
    int j = 0;
    int i = d;
    while(i > 0)
    {
        i /=10;
        j++;
    }  
    int diff = 10 - j;
    while(diff > 0)
    {
        std::cout << " ";
        diff--;
    }
    return(d);
}

void Phonebook::search()
{
    int i = 0;
    std::string str;

    std::cout << " ___________________________________________"<< std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|"<< std::endl;
    std::cout << "|----------|----------|----------|----------|"<< std::endl;

    if (this->_index == 0)
    {
        std::cout << " ------------------------------------------- "<< std::endl;
        std::cout << "Phonebook is empty!";
        
    }

    while (this->_index > i && this->_index != 0)
    {
        // str = this->_index % 8;
        std::cout<<"|" << handle_int(i + 1);
        str = this->_contact[i].get_fname();
        std::cout<<"|" << handle_str(str);
        str = this->_contact[i].get_lname();
        std::cout<<"|" << handle_str(str);
         str = this->_contact[i].get_nick();
        std::cout<<"|" << handle_str(str) << "|"<<std::endl;
        i++;
    }
    if(this->_index != 0)
        std::cout << " ------------------------------------------- "<< std::endl;

    int index = 0;
    while(1 && this->_index != 0)
    {
        std::cout << "Select an index: ";
        std::cin >> index;
        // std::cout << index;
        if(index > this->_index)
        {
          std::cout << "Invalid index!"<< std::endl;
        }
        else if(index > 0 && index <= this->_index)
        {
            std::cout << "First Name: "<< this->_contact[index - 1].get_fname()<<std::endl;
            std::cout << "Last Name: "<< this->_contact[index - 1].get_lname()<<std::endl;
            std::cout << "NickName: "<< this->_contact[index - 1].get_nick()<<std::endl;
            std::cout << "NumPhone: "<< this->_contact[index  - 1].get_phone()<<std::endl;
            break;
        }
        
     }
}

void Phonebook::exit()
{
    std::cout << "See u soon!";
    std::exit(0);
}

int main()
{
    int i = 1;
    int j = 0;
    std::string str;
    Phonebook phone;
    while (str != "EXIT")
    {
        std::cout << "enter your command$>_";
        std::cin >> str;
        if (str == "ADD")
            phone.add();
        if (str == "SEARCH")
            phone.search();
    }
}