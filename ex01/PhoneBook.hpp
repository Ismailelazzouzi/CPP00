#pragma once

#include "Contact.hpp"

class PhoneBook
{
    int     currentNb;
    public:
    Contact contacts[7];
    int     getCurrentNb();
    void    setCurrentNb(int currentNb);
    void    searchContact();
    void    addContact();
};