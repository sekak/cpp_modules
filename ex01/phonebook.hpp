
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>


class Contact
{
    
    private:
    std::string first_name;
    std::string nick_name;
    std::string last_name;
    std::string number_phone;

    public:
    Contact();
    ~Contact();
    void set_name(std::string str);
    void set_last(std::string str);
    void set_nickname(std::string str);
    void set_phonenumber(std::string str);

    std::string get_fname(void) const;
    std::string get_lname(void) const;
    std::string get_nick(void) const;
    std::string get_phone(void) const;   
};

class Phonebook
{
    private:
        Contact _contact[8];
        int _index;
    public:
        Phonebook();
        ~Phonebook();
    void add();
    void search();
    void exit();

};


#endif