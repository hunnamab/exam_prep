#include <unistd.h>

void print_line(char *str)
{
    int i = 0;
    int len = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            len = str[i] - 64;
            while (len--)
                write(1, &str[i], 1);
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            len = str[i] - 96;
            while (len--)
                write(1, &str[i], 1);
        }
        else
            write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

int main(int args, char **argv)
{
    if (args != 2)
        write(1, "\n", 1);
    else
        print_line(argv[1]);
    return (0);
}