#include <stdlib.h>
#include <stdio.h>

int get_len(int nbr)
{
    int len = 0;

    if (nbr < 0)
    {
        nbr *= -1;
        len++;
    }
    while (nbr > 0)
    {
        nbr /= 10;
        len++;
    }
    return (len);
}

char	*ft_itoa(int nbr)
{
    char *res = NULL;
    int len = get_len(nbr);
    int i = 0;
    int len2;
    printf("len = %d\n", len);
    if (!(res = malloc(sizeof(char) * len + 1)))
        return (NULL);
    if (nbr == 0)
        return("0");
    if (nbr == -2147483648)
        return("-2147483648\0");
    res[len] = '\0';
    if (nbr < 0)
    {
        nbr *= -1;
        res[0] = '-';
        i++;
    }
    len2 = len - 1;
    while (i < len)
    {
        res[len2] = nbr % 10 + '0';
        nbr /= 10;
        len2--;
        i++;
    }
    return (res);
}

int main()
{
    printf("%s\n", ft_itoa(0));
    return (0);
}