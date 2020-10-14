#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int res = 0;
    int neg = 1;

    if (str[i] == '-')
    {
        neg = -1;
        i++;
    }
    while (str[i] <= 32)
        i++;
    while (str[i] != '\0')
    {
        res *= str_base;
        if (str_base > 10 && str[i] >= 'A' && str[i] <= 'F')
            res += str[i] - 55;
        else if (str_base > 10 && str[i] >= 'a' && str[i] <= 'f')
            res += str[i] - 87;
        else if (str[i] >= '0' && str[i] <= '9')
            res += str[i] - '0';
        i++;
    }
    return (res * neg);
}

int main()
{
    printf("%d\n", ft_atoi_base("-92", 14));
    return (0);
}