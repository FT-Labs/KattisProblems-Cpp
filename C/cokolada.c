#include <stdio.h>

int main ()
{
	int n;
	scanf("%d", &n);

	if (__builtin_popcount(n) == 1)
	{
		if (n == 1)
			printf("2 1\n");
		else
			printf("%d 0\n", n);
	}
	else
	{
		int mask = 32 - __builtin_clz(n);
		int bars = (1 << mask);

		if (n%2 == 0)
			printf("%d %d\n", bars, mask - __builtin_ctz(n));
		else
			printf("%d %d\n", bars, mask);
	}

	return 0;
}

