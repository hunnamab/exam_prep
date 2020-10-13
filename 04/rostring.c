#include <unistd.h>
#include <stdio.h>

void rostring(char *str)
{
    int fwl = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        while (str[i] == ' ' || str[i] == '\t')
            i++;
        if (fwl == 0)
        {
            while (str[i] != '\t' && str[i] != ' ' && str[i] != '\0')
            {
                i++;
                fwl++;
            }
        }
        else
        {
            if (str[i] != '\t' && str[i] != ' ' && str[i] != '\0')
            {
                while (str[i] != '\t' && str[i] != ' ' && str[i] != '\0')
                {
                    write(1, &str[i], 1);
                    i++;
                }
                write(1, " ", 1);
            }
        }
    }
    i = 0;
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    while (fwl--)
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int args, char **argv)
{
    if (args > 1 && *argv[1])
        rostring(argv[1]);
    write(1, "\n", 1);
    return (0);
}