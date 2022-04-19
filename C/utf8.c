#include <stdio.h>
#include <string.h>
#include <stdlib.h>


static int count[4];


int main ()
{
	int flag = 0;
	int n;
	scanf("%d", &n);

	int utf_type = 0, cnt = -1;
	char cur[10];

	while (n--)
	{
		scanf("%s", cur);
		if (cnt > 0)
		{
			if (cur[0] != '1' || cur[1] != '0')
			{
				printf("invalid\n");
				return 0;
			}
			cnt--;

			if (cnt == 0)
			{
				count[utf_type]++;
				cnt = -1;
			}
		}
		else
		{
			int ones = 0;
			char *curr = cur;
			while((*curr) == '1' && ones < 5)
			{
				ones++;
				curr++;
			}

			if (ones > 4 || ones == 1)
			{
				printf("invalid\n");
				return 0;
			}

			if (!ones)
				count[0]++;
			else
			{
				--ones;
				utf_type = ones;
				cnt = ones;
			}
		}
	}

	if (cnt > 0)
		printf("invalid\n");
	else
	{
		for (int i = 0; i < 4; i++)
		{
			printf("%d\n", count[i]);
		}
	}

	return 0;
}

