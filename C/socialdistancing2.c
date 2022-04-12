#include <stdio.h>



int main (int argc, char *argv[])
{
	int seats, occ;
	scanf("%d %d",&seats, &occ);
	int start, prev, cur;
	int tot = 0;

	for (int i = 0; i < occ; i++)
	{
		scanf("%d", &cur);
		if (i == 0)
			start = cur;
		else
			tot += (cur - prev - 2) / 2;
		prev = cur;
	}
	tot += (start - 2 + seats - cur) / 2;

	printf("%d\n", tot);

	return 0;
}

