#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int i = 128;
    while (i > 0)
    {
        if (octet & i)
            write(1, "1", 1);
        else
            write(1, "0", 1);
        i >>= 1;
    }    
}

int main()
{
    unsigned char byte = 2;
    print_bits(byte);
    return (0);
}