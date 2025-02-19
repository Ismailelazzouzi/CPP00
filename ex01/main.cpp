#include "Contact.hpp"
#include "PhoneBook.hpp"

int main ()
{
    PhoneBook   book;

    book.contacts[0].setFirstName("ISMAIL");
    book.contacts[0].setLastName("EL AZZOUZI");
    book.contacts[0].setNickName("T9ASHER");
    book.contacts[0].setDarkestSecret("SAWA DLFIL");
    book.contacts[0].setPhoneNumber("658357114");
    book.contacts[1].setFirstName("SAAD");
    book.contacts[1].setLastName("EL MOUDDEN");
    book.contacts[1].setNickName("T9ASHER");
    book.contacts[1].setDarkestSecret("SAWA DLFIL");
    book.contacts[1].setPhoneNumber("658357114");
    book.setCurrentNb(2);
    while (1)
    {
        std::string        command;
        int         i = 0;
        //book.setCurrentNb(0);

        std::cout << "ENTER ONE OF THE FOLLOWING COMMANDS (ADD / SEARCH / EXIT):" << std::endl;
        if (!getline(std::cin, command))
            exit(1);
        if (!command.compare("ADD"))
            book.addContact();
        else if (!command.compare("SEARCH"))
            book.searchContact();
        else if (!command.compare("EXIT"))
            exit(0);
        else
            std::cout << "INVALID COMMAND" << std::endl;
    }
}