#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_atoi(char *str)
{
    int i = 0;
    int neg = 1;
    int res = 0;

    while (str[i] <= 32)
        i++;
    if (str[i] == '-')
    {
        neg = -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        res *= 10;
        res = res + str[i] - '0';
        i++;
    }
    return (res * neg);
}

void print_hex(int nmb)
{
    if (nmb >= 16)
    {
        print_hex(nmb / 16);
        print_hex(nmb % 16);
    }
    if (nmb < 10)
        ft_putchar(nmb + '0');
    else if (nmb < 16)
        ft_putchar(nmb + 87);
}

int main(int args, char **argv)
{
    if (args == 2)
        print_hex(ft_atoi(argv[1]));
    write(1, "\n", 1);
    return (0);
}