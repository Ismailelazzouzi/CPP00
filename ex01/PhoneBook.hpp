#pragma once

#include "Contact.hpp"

class PhoneBook
{
    int     currentNb;
    int     index;
    Contact contacts[8];
    public:
    int     getNumber();
    int     get_oldest_index();
    int     getIndex();
    void    setIndex(int index);
    int     getCurrentNb();
    void    setCurrentNb(int currentNb);
    void    searchContact();
    void    addContact();
};