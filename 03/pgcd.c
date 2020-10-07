#include <stdlib.h>
#include <stdio.h>

void denom(char *str1, char *str2)
{
    int nmb1 = atoi(str1);
    int nmb2 = atoi(str2);
    int den = 0;
    int i = 1;

    while (i < nmb1 && i < nmb2)
    {
        if (nmb1 % i == 0 && nmb2 % i == 0)
            den = i;
        i++;
    }
    printf("%d\n", den);
}

int main(int args, char **argv)
{
    if (args == 3)
        denom(argv[1], argv[2]);
    else
        printf("\n");
    return (0);
}