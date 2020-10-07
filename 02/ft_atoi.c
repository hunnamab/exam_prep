/* #include <stdio.h>
#include <stdlib.h> */

int	ft_atoi(const char *str)
{
    int res = 0;
    int i = 0;
    int neg = 1;
    while (str[i] <= 32)
        i++;
    if (str[i] == '-')
    {
        neg = -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
    {
        res *= 10;
        res = res + str[i] - '0';
        i++;
    }
    return (res * neg);
}

/* int main()
{
    char *str = "   -42";
    int nmb = atoi(str);
    int nmb2 = ft_atoi(str);
    printf("%d\n", nmb);
    printf("%d\n", nmb2);
} */