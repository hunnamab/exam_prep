#include <unistd.h>

int main(int args, char **argv)
{
    int i = 0;
    char c;
    if (args == 2)
    {
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                c = 'M' - (argv[1][i] - 'N');
            else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                c = 'm' - (argv[1][i] - 'n');
            else
                c = argv[1][i];
            write(1, &c, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}