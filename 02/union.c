#include <unistd.h>

int is_repeat2(char *str, char c)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int is_repeat(char *str, int i, char c)
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
    int j = 0;
    if (args == 3)
    {
        while (argv[1][i] != '\0')
        {
            if (!is_repeat(argv[1], i, argv[1][i]))
                write(1, &argv[1][i], 1);
            i++;
        }
        while (argv[2][j] != '\0')
        {
            if (!is_repeat2(argv[1], argv[2][j]))
            {
                if (!is_repeat(argv[2], j, argv[2][j]))
                    write(1, &argv[2][j], 1);
            }
            j++;
        }
    }
    write(1, "\n", 1);
    return (0);
}