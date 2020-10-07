#include <string.h>
#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i++;
    return (s1[i] - s2[i]);
}

/* int main()
{
    int i = ft_strcmp("hello", "hello1");
    printf("%d\n", i);
    int j = strcmp("hello", "hello1");
    printf("%d\n", j);
    return (0);
} */