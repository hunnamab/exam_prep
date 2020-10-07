#include <unistd.h>

int is_repeat(int i, char *str, char c)
{
    int cnt = 0;
    while (cnt < i)
    {
        if (str[cnt] == c)
            return (1);
        cnt++;
    }
    return (0);
}

int main(int args, char **argv)
{
    int i = 0;
    int j;

    if (args == 3)
    {
        while (argv[1][i] != '\0')
        {
            j = 0;
            while (argv[2][j] != '\0')
            {
                if (argv[1][i] == argv[2][j])
                {
                    if (!is_repeat(i, argv[1], argv[1][i]))
                    {
                        write(1, &argv[1][i], 1);
                        break ;
                    }
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}