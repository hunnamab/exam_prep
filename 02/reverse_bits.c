#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
    unsigned char rev_oct = 0;
    int i = 8;

    while (i > 0)
    {
        rev_oct = (rev_oct << 1) | (octet & 1);
        octet >>= 1;
        i--;
    }
    return (rev_oct);
}
/* int main()
{
    unsigned char c;

	c = '.';
	write(1, &c, 1);
	write(1, "\n", 1);
	c = reverse_bits(c);
	write(1, &c, 1);
	write(1, "\n", 1);
    return (0);
} */