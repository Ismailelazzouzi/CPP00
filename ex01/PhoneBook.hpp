#pragma once

#include "Contact.hpp"

class PhoneBook
{
    int     currentNb;
    Contact contacts[7];
    public:
    int     getCurrentNb();
    void    setCurrentNb(int currentNb);
    void    searchContact();
    void    addContact();
};