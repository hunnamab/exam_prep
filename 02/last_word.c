#include <unistd.h>

int main(int args, char **argv)
{
    int i = 0;
    int len;
    int end;
    int start;
    if (args == 2)
    {
        while (argv[1][i] != '\0')
            i++;
        len = i - 1;
        while (argv[1][len] == ' ' || argv[1][len] == '\t')
            len--;
        end = len;
        start = end;
        while(argv[1][start] != ' ' && argv[1][start] != '\t' && start >= 0)
            start--;
        start++;
        while (start <= end)
        {
            write(1, &argv[1][start], 1);
            start++;
        }
    }
    write(1, "\n", 1);
    return (0);
}