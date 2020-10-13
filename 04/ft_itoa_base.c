#include <stdlib.h>
#include <stdio.h>

int get_len(int n, int base)
{
    int len = 0;
    if (base == 10 && n < 0)
    {
        len++;
        n *= -1;
    }
    while (n > 0)
    {
        n /= base;
        len++;
    }
    return (len);
}

char	*ft_itoa_base(int value, int base)
{
    int len = get_len(value, base);
    char *str;
    char *radix = "0123456789ABCDEF";
    if (value == 0)
        return("0");
    if (base == 10 && value == -2147483648)
        return("-2147483648");
    if (!(str = malloc(sizeof(char) * len + 1)))
        return (NULL);
    int i = 0;
    while (i <= len)
    {
        str[i] = '\0';
        i++;
    }
    int val = value;
    i = 0;
    if (base == 10 && value < 0)
    {
        val *= -1;
        str[0] = '-';
        i = 1;
    }
    while (len > i)
    {
        str[len - 1] = radix[val % base];
        val /= base;
        len--;
    }
    return (str);
}

int main()
{
    printf("%s\n", ft_itoa_base(170, 16));
    return (0);
}