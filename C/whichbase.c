#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
	int n;
	scanf("%d", &n);
	char buf[15];
	int cse;

	for (int i=1; i<=n; i++)
	{
		scanf("%d", &cse);
		scanf("%s", buf);

		long long oct = 0, hex = 0;

		for (int j = strlen(buf) - 1; j >= 0; j--)
		{
			int idx = strlen(buf) - j - 1;

			if (oct != -1)
			{
				if (buf[j] >= '8')
					oct = -1;
				else
					oct += (long long) (buf[j] - '0') * (1ll << (idx * 3));
			}
			hex += (long long) (buf[j] - '0') * (1ll << (idx * 4));
		}
		oct = (oct == -1 ? 0 : oct);
		printf("%d %llu %d %llu\n", cse, oct, atoi(buf), hex);
	}

	return 0;
}

