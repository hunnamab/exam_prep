#include <unistd.h>

int main(int args, char **argv)
{
    int i = 0;
    if (args == 2)
    {
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] == ' ' || argv[1][i] == '\t')
            {
                if (argv[1][i + 1] > 32 && argv[1][i + 1] != '\0')
                    write(1, " ", 1);
            }
            else if (argv[1][i] != ' ' && argv[1][i] != '\t')
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}