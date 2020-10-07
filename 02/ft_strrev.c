#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char    *ft_strrev(char *str)
{
    char tmp;
    int j = ft_strlen(str) - 1;
    int i = 0;
    while (i < j)
    {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        i++;
        j--;
    }
    return (str);
}

/* int main()
{
    char s[100] = "hello";
    printf("%s\n", ft_strrev(s));
    return (0);
} */