#include <stdlib.h>
//#include <stdio.h>

char *ft_strdup(char *s)
{
    char *str;
    int i = 0;
    while (s[i] != '\0')
        i++;
    str = (char *)malloc(sizeof(char) * i + 1);
    if (str == NULL)
        return (NULL);
    i = 0;
    while (s[i] != '\0')
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

/* int main()
{
    char *s = "this is a string";
    char *p;

    p = ft_strdup(s);
    printf("%s\n", p);
    return (0);
} */