#include "phonebook.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::set_name(std::string str)
{
    this->first_name = str;
    // std::cout << str;
}

void Contact::set_last(std::string str)
{
    this->last_name = str;
    // std::cout << str;
}


void Contact::set_phonenumber(std::string str)
{
    this->number_phone = str;
}


void Contact::set_nickname(std::string str)
{
    this->nick_name = str;
}


std::string Contact::get_fname() const{
    return(this->first_name);
}


std::string Contact::get_lname() const
{
    return(this->last_name);
}

std::string Contact::get_nick() const {
    return(this->nick_name);
}

std::string Contact::get_phone() const {
    return(this->number_phone);
}