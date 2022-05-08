#include <stdio.h>
#include <string.h>

int main ()
{
	int n;
	scanf("%d", &n);

	if (n <= 100)
	{
		printf("99\n");
	}
	else
	{
		int rem = n%100;

		int low = n - rem - 1;
		int high = (100 - rem - 1) + n;

		int dlow = n - low, dhigh = high - n;

		if (dlow == dhigh)
			printf("%d\n", high);
		else if (dlow < dhigh)
			printf("%d\n", low);
		else
			printf("%d\n", high);
	}

	return 0;
}

