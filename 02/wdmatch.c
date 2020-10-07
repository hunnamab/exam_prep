#include <unistd.h>

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    int len = 0;
    int str_len = 0;
    if (ac == 3)
    {
        str_len = ft_strlen(av[1]);
        while (av[1][i] != '\0')
        {
            while (av[2][j] != '\0')
            {
                if (av[1][i] == av[2][j])
                {
                    len++;
                    break ;
                }
                j++;
            }
            i++;
        }
        if (str_len == len)
            ft_putstr(av[1]);
    }
    write(1, "\n", 1);
    return (0);
}