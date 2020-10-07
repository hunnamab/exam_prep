#include <unistd.h>

int main(int args, char **argv)
{
    int i = 0;
    char c;
    if (args != 2)
        write(1, "\n", 1);
    else
    {
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] > 64 && argv[1][i] < 91)
            {
                c = argv[1][i] + 32;
                write(1, &c, 1);
            }
            else if (argv[1][i] > 96 && argv[1][i] < 123)
            {
                c = argv[1][i] - 32;
                write(1, &c, 1);
            }
            else
                write(1, &argv[1][i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
    return (0);
}