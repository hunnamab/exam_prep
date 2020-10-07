#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nmb)
{
    if (nmb > 9)
    {
        ft_putnbr(nmb / 10);
        ft_putnbr(nmb % 10);
    }
    else
        ft_putchar(nmb + '0');
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

int is_prime(int i)
{
    int j = 2;

    while (j < i)
    {
        if (i % j == 0)
            return (0);
        j++;
    }
    return (1);
}

void prime_sum(char *nmb)
{
    int i = 2;
    int n = ft_atoi(nmb);
    int sum = 0;
    if (n <= 0)
    {
        write(1, "0\n", 1);
        exit (1);
    }
    else
    {
        while (i <= n)
        {
            if (is_prime(i))
                sum += i;
            i++;
        }
    }
    ft_putnbr(sum);
    ft_putchar('\n');
}

int main(int args, char **argv)
{
    if (args != 2)
        write(1, "0\n", 2);
    else
        prime_sum(argv[1]);
    return (0);
}