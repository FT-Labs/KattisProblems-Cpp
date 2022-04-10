#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX(x,y) (x) > (y) ? (x) : (y)


int* tmp;

void intdup(const int* src, int size)
{
	memcpy(tmp, src, size * sizeof(int));
}


int main (int argc, char *argv[])
{
	int k, r;
	scanf("%d %d", &k, &r);
	int mats[k];
	tmp = malloc(sizeof(int) * k);

	for (int i = 0; i < k; i++)
	{
		scanf("%d", &mats[i]);
	}
	intdup(mats, k);

	int mx = -1;

	for (int i = 0; i < r; i++)
	{
		int profit, tot = 0;
		int cost[k];

		for (int j = 0; j < k; j++)
		{
			scanf("%d", &cost[j]);
		}
		scanf("%d", &profit);

		while (1)
		{
			for (int j = 0; j < k; j++)
			{
				tmp[j] -= cost[j];
				if (tmp[j] < 0)
					goto end;
			}
			tot += profit;
		}
end:
		intdup(mats, k);
		mx = MAX(mx, tot);
	}

	printf("%d\n", mx);
	free(tmp);

	return 0;
}

