#include <stdlib.h>
#include <stdio.h>

char    **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char **res;
    if (!(res = (char **)malloc(sizeof(char *) * 1000)))
        return (NULL);
    while (str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
        i++;
    while (str[i] != '\0')
    {
        if (str[i] > 32)
        {
            res[j] = malloc(sizeof(char) * 1000);
            while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
            {
                res[j][k] = str[i];
                k++;
                i++;
            }
            res[j][k] = '\0';
            k = 0;
            j++;
        }
        else
            i++;
    }
    return (res);
}

int main()
{
    char **str = ft_split("hellomydearfriend");
    int i = 0;
    while (i < 4)
    {
        printf("%s\n", str[i]);
        i++;
    }
    return (0);
}