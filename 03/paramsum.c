#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putnbr(int n)
{
    if (n > 9)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    else
    {
        ft_putchar(n + '0');
    }
}

int main(int args, char **argv)
{
    (void)argv;
    if (args == 1)
        write(1, "0", 1);
    else
        ft_putnbr(args-1);
    write(1, "\n", 1);
    return (0);
}