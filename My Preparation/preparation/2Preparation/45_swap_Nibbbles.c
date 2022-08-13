// #include <stdio.h>

// unsigned char swapNibbles(unsigned char x)
// {
// 	return  ( (x & 0x0F)<<4 | (x & 0xF0)>>4 );
// }

// int main()
// {
// 	unsigned char x = 100;
// 	printf("%u", swapNibbles(x));
// 	return 0;
// }

/*

20 : 10100 swap 1st two bits with last two bits

00101;

*/

#include <stdio.h>

unsigned char swapNibbles(unsigned char x)
{
	// return  ( (x>>2) | (x<<(32-2)));
    return  ( (x & 0x0f)<<4 | (x & 0xf0)>>4 );
}

int main()
{
	unsigned char x = 32;
	printf("%u", swapNibbles(x));
	return 0;
}


