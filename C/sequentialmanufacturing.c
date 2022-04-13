#include <stdio.h>
#define MAX(x,y) (x) > (y) ? (x) : (y)

typedef unsigned long long ull;

int main (int argc, char *argv[])
{
	ull n, p;
	scanf("%llu %llu", &n, &p);

	ull mx = 0, tot = 0;

	for (int i = 0; i < n; i++)
	{
		ull cur;
		scanf("%llu ", &cur);
		tot += cur;
		mx = MAX(mx, cur);
	}

	printf("%llu\n", tot + mx * (p - 1));

	return 0;
}

