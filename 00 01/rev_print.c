#include <unistd.h>

int main(int args, char **argv)
{
    int i = 0;
    if (args == 2)
    {
        while (argv[1][i] != '\0')
            i++;
        i--;
        while (i >= 0)
        {
            write(1, &argv[1][i], 1);
            i--;
        }
    }
    write(1, "\n", 1);
    return (0);
}