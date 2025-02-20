#include "PhoneBook.hpp"


void     PhoneBook::setCurrentNb(int currentNb)
{
    this->currentNb = currentNb;
}

int     PhoneBook::getCurrentNb()
{
    return (this->currentNb);
}

static  void    printEdited(std::string str)
{
    if (str.length() < 10)
    {
        int diff = 10 - str.length();
        std::cout << str;
        for (size_t i = 0; i < diff; i++)
        {
            std::cout << " ";
        }
    }   
    else
    {
        std::string sub;
        sub = str.substr(0, 9);
        std::cout << sub << ".";
    }
}

static  void    printEntry()
{
    std::cout << "|";
    for (size_t i = 0; i < 4; i++)
    {
        for (size_t i = 0; i < 11; i++)
        {   
            std::cout << "=";
        }
    }
    std::cout << "|";
    std::cout << std::endl;
    std::cout << "|";
    printEdited(" INDEX");
    std::cout << "|";
    printEdited("FirstNAME");
    std::cout << "|";
    printEdited(" LastName");
    std::cout << "|";
    printEdited(" NickName");
    std::cout << " |";
    std::cout << std::endl;
    std::cout << "|";
    for (size_t i = 0; i < 4; i++)
    {
        for (size_t i = 0; i < 11; i++)
        {   
            std::cout << "=";
        }
    }
    std::cout << "|";
    std::cout << std::endl;
}

static void printFields(Contact *contacts, int currentNb)
{

    for (size_t i = 0; i < currentNb; i++)
    {
        int j = i + 1;
        std::cout << "|";
        std::cout << "     " << j << "    ";
        std::cout << "| ";
        printEdited(contacts[i].getFirstName());
        std::cout << "|";
        printEdited(contacts[i].getLastName());
        std::cout << "|";
        printEdited(contacts[i].getNickName());
        std::cout << "|";
        std::cout << std::endl;
        std::cout << "|";
        for (size_t i = 0; i < 4; i++)
        {
            for (size_t i = 0; i < 11; i++)
            {   
                std::cout << "=";
            }
        }
        std::cout << "|";
        std::cout << std::endl;
    }
}

void    PhoneBook::searchContact()
{
    system("clear");
    std::string choice;
    int choiceNb;

    if (PhoneBook::getCurrentNb() == 0)
    {
        std::cout << "No Contacts saved yet, try Adding more" << std::endl;
        sleep(1);
    }
    else
    {
    printEntry();
    printFields(PhoneBook::contacts, currentNb);
    while (1)
    {
        std::cout << "Chose an index number..." << std::endl;
        if (!getline(std::cin, choice))
            exit(1);
        if (!choice.empty())
        {
            choiceNb = atoi(choice.c_str());
            if (choiceNb <= 0 || choiceNb > currentNb)
            {
                std::cout << "Number out of range try searching again" << std::endl;
                usleep(500000);
                system("clear");
                break ;
            }
            else
            {
                system("clear");
                std::cout << "First Name : " << PhoneBook::contacts[choiceNb - 1].getFirstName() << std::endl;
                std::cout << "Last Name : " << PhoneBook::contacts[choiceNb - 1].getLastName() << std::endl;
                std::cout << "Nick-Name : " << PhoneBook::contacts[choiceNb - 1].getNickName() << std::endl;
                std::cout << "Phone Number : " << PhoneBook::contacts[choiceNb - 1].getPhoneNumber() << std::endl;
                std::cout << "Darkest Secret : " << PhoneBook::contacts[choiceNb - 1].getDarkestSecret() << std::endl;
                std::cout << std::endl;
                break ;
            }
        }
        else
            std::cout << "No empty fields please" << std::endl;
        usleep(500000);
    }
    }
}

void    PhoneBook::addContact()
{
    std::string fileds[5] = {
        "Enter First Name : ",
        "Enter Last Name : ",
        "Enter Nick-Name : ",
        "Enter Phone Number : ",
        "Enter Darkest Secret : "};
    std::string info[5];
    std::string input;
    int i;

    i = 0;
    while (i < 5)
    {
        std::cout << fileds[i] << std::endl;
        getline(std::cin, input);
        if (input.empty())
        {
            std::cout << "A contact cannot have an empty filed" << std::endl;
            usleep(500000);
            system("clear");
            break ;
        }
        if (i == 3)
        {
            int j = 0; 
            while (isnumber(input[j]))
                j++;
            if (j != input.length())
            {
                std::cout << "Phone number must be all digits" << std::endl;
                usleep(500000);
                system("clear");
                break ;
            }
        }
        info[i] = input;
        input.erase();
        i++;
    }
    if (currentNb <= 7)
    {
        contacts[currentNb].setFirstName(info[0]);
        contacts[currentNb].setLastName(info[1]);
        contacts[currentNb].setNickName(info[2]);
        contacts[currentNb].setPhoneNumber(info[3]);
        contacts[currentNb].setDarkestSecret(info[4]);
        setCurrentNb(currentNb + 1);
        std::cout << "Contact " << currentNb << " Added Succesfully" << std::endl;
        usleep(500000);
        system("clear");
    }
    else
    {
        system("clear");
        std::cout << "Phonebook full" << std::endl;
        sleep(1);
        system("clear");
    }
}