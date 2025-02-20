#include "Contact.hpp"
#include "PhoneBook.hpp"

int main ()
{
    PhoneBook   book;

    book.setCurrentNb(0);
    while (1)
    {
        std::string        command;
        int         i = 0;

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