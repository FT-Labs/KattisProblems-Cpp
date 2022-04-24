#include <stdio.h>
#include <math.h>


int main (int argc, char *argv[])
{
	int a, b;
	scanf("%d %d", &a, &b);

	int n1 = (a/2.0 + 2 + sqrt(pow(a/2.0+2, 2) - 4 * (a + b)))/ 2;
	int n2 = (a+b) / n1;

	printf("%d %d\n", n1, n2);

	return 0;
}

