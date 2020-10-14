#include <unistd.h>
#include <stdlib.h>

int brackets(char *str, int i)
{
    int dir = 0;
    int cnt = 0;

    if (str[i] == '[')
        dir = 1;
    else if (str[i] == ']')
        dir = -1;
    while (str[i] != '\0')
    {
        if (str[i] == '[')
            cnt++;
        if (str[i] == ']')
            cnt--;
        if ((str[i] == '[' || str[i] == ']') && cnt == 0)
            return (i);
        i += dir;
    }
    return (0);
}

void brainfuck(char *str)
{
    char *arr;
    int i = 0;
    int j = 0;

    arr = malloc(sizeof(char) * 2048);
    while (i < 2048)
    {
        arr[i] = '\0';
        i++;
    }
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '>')
            j++;
        else if (str[i] == '<')
            j--;
        else if (str[i] == '+')
            arr[j]++;
        else if (str[i] == '-')
            arr[j]--;
        else if (str[i] == '.')
            write(1, &arr[j], 1);
        else if ((str[i] == '[' && !(arr[j])) || (str[i] == ']' && (arr[j])))
            i = brackets(str, i);
        i++;
    }
}

int main(int args, char **argv)
{
    if (args > 1)
        brainfuck(argv[1]);
    else
        write(1, "\n", 1);
    return (0);
}