#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    j = 0;

    while (i < argc)
    {
        j = 0;
        while (j < strlen(argv[i]))
            putchar(toupper(argv[i][j++]));
        i++;
    }
    if (argv[1] == NULL)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
}
