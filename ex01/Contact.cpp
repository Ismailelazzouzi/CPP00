#include "Contact.hpp"
#include "PhoneBook.hpp"

void    Contact::set_oldest(int oldest)
{
    this->oldest = oldest;
}

int    Contact::get_oldest()
{
    return (this->oldest);
}

std::string Contact::getFirstName()
{
    return (this->firstName);
}

void        Contact::setFirstName(std::string firstName)
{
    this->firstName = firstName;
}

std::string Contact::getLastName()
{
    return (this->lastName);
}

void        Contact::setLastName(std::string lastName)
{
    this->lastName = lastName;
}

std::string Contact::getNickName()
{
    return (this->nickName);
}

void        Contact::setNickName(std::string nickName)
{
    this->nickName = nickName;
}

std::string Contact::getDarkestSecret()
{
    return (this->darkestSecret);
}
void        Contact::setDarkestSecret(std::string darkestSecret)
{
    this->darkestSecret = darkestSecret;
}
std::string Contact::getPhoneNumber()
{
    return (this->phoneNumber);
}
void        Contact::setPhoneNumber(std::string PhoneNumber)
{
    this->phoneNumber = PhoneNumber;
}