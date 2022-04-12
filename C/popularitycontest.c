#include <stdio.h>


int main (int argc, char *argv[])
{
	int n, m;
	scanf("%d %d", &n, &m);
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = -i -1;
	}

	for (int i = 0; i < m; i++)
	{
		int x, y;
		scanf("%d %d", &x, &y);

		arr[x-1]++, arr[y-1]++;
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}


	return 0;
}

