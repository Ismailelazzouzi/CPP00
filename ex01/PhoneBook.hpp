#pragma once

#include "Contact.hpp"

class PhoneBook
{
    int     currentNb;
    public:
    Contact contacts[8];
    int     getCurrentNb();
    void    setCurrentNb(int currentNb);
    void    searchContact();
    void    addContact();
};