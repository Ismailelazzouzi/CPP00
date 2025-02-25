#pragma once

#include <iostream>
#include <string>
#include <unistd.h>

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string darkestSecret;
    std::string  phoneNumber;
    bool        oldest;
public:
    int         get_oldest();
    void        set_oldest(int oldest);
    std::string getFirstName();
    void        setFirstName(std::string firstName);
    std::string getLastName();
    void        setLastName(std::string lastName);
    std::string getNickName();
    void        setNickName(std::string nickName);
    std::string getDarkestSecret();
    void        setDarkestSecret(std::string darkestSecret);
    std::string         getPhoneNumber();
    void        setPhoneNumber(std::string phoneNumber);
};
