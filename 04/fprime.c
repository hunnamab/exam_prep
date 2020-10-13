#include <stdio.h>
#include <stdlib.h>

void fprime(int nmb)
{
    int i = 2;

    if (nmb == 1)
        printf("1");
    else
    {
        while (nmb >= i)
        {
            if (nmb % i == 0)
            {
                printf("%d", i);
                if (nmb != i)
                    printf("*");
                nmb /= i;
                i--;
            }
            i++;
        }
    }
}

int main (int args, char **argv)
{
    if (args == 2)
        fprime(atoi(argv[1]));
    printf("\n");
    return (0);
}