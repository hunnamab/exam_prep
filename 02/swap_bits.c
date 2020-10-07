#include <unistd.h>

/* void	print_bits(unsigned char octet)
{
	int	i = 256;
	while (i >>= 1)
		(octet & i) ? write(1, "1", 1) : write(1, "0", 1);
    write(1, "\n", 1);
} */

unsigned char	swap_bits(unsigned char octet)
{
    unsigned char res = 0;
    unsigned char right = octet >> 4;
    unsigned char left = octet << 4;
    res = right | left;
    return (res);
}

/* int main()
{
    unsigned char byte = 154;
    print_bits(byte);
    byte = swap_bits(byte);
    print_bits(byte);
} */