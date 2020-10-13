#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

void rev_string(char *str)
{
    int len = ft_strlen(str) - 1;
    int start = 0;
    int end = 0;
    while (len >= 0)
    {
        end = len;
        start = len;
        while (str[len] != ' ' && start >= 0)
        {
            start--;
            len--;
        }
        start++;
        while (start <= end)
        {
            write(1, &str[start], 1);
            start++;
        }
        if (len > 0)
            write(1, " ", 1);
        len--;
    }
}

int main(int args, char **argv)
{
    if (args == 2)
        rev_string(argv[1]);
    write(1, "\n", 1);
    return (0);
}