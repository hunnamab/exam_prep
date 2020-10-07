#include <unistd.h>

int main(int args, char **argv)
{
    int i = 1;
    int j;
    char c;
    if (args < 2)
        write(1, "\n", 1);
    else
    {
        while (i < args)
        {
            j = 0;
            while (argv[i][j] != '\0')
            {
                if (argv[i][j] >= 'A' && argv[i][j] <= 'Z' && argv[i][j + 1] != ' ' && argv[i][j + 1] != '\t' && argv[i][j + 1] != '\0')
                {
                    c = argv[i][j] + 32;
                    write(1, &c, 1);
                }
                else if (argv[i][j] >= 'a' && argv[i][j] <= 'z' && (argv[i][j + 1] == ' ' || argv[i][j + 1] == '\t' || argv[i][j + 1] == '\0'))
                {
                    c = argv[i][j] - 32;
                    write(1, &c, 1);
                }
                else
                    write(1, &argv[i][j], 1);
                j++;
            }
            write(1, "\n", 1);
            i++;
        }
    }
    return (0);
}