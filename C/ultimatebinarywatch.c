#include <stdio.h>
#define GETBIT(x, pos) (((x >> pos) & 1) == 1 ? '*' : '.')

int main (int argc, char *argv[])
{
	int one, two, three ,four;
	one = getchar() - '0', two = getchar() - '0', three = getchar() - '0', four = getchar() - '0';
	// 1615

	for (int i = 3; i >= 0; i--)
	{
		printf("%c %c   %c %c\n", GETBIT(one, i), GETBIT(two, i), GETBIT(three, i), GETBIT(four, i));
	}

	return 0;
}

