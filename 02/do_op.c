#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int args, char **argv)
{
    int nmb1;
    int nmb2;
    char sign;
    int res = 0;
    if (args == 4)
    {
        nmb1 = atoi(argv[1]);
        nmb2 = atoi(argv[3]);
        sign = argv[2][0];
        if (sign == '+')
            res = nmb1 + nmb2;
        else if (sign == '-')
            res = nmb1 - nmb2;
        else if (sign == '*')
            res = nmb1 * nmb2;
        else if (sign == '/')
            res = nmb1 / nmb2;
        else if (sign == '%')
            res = nmb1 % nmb2;
        printf("%d\n", res);
    }
    else
        write(1, "\n", 1);
    return (0);
}