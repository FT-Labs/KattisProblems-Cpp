#include <stdio.h>
#define MAX(x,y) (x) > (y) ? (x) : (y)


int main ()
{
	int l;

	while (scanf("%d", &l) && l)
	{
		int tot_x = 0, tot_y = 0;
		int cur_x = 0, cur_y = 0;

		int x, y;

		while(scanf("%d %d", &x, &y) && (x != -1 && y != -1))
		{
			if (cur_x + x <= l)
			{
				cur_x += x;
				cur_y = MAX(cur_y, y);
			}
			else
			{
				tot_x = MAX(tot_x, cur_x);
				tot_y += cur_y;
				cur_x = x;
				cur_y = y;
			}
		}
		tot_x = MAX(tot_x, cur_x), tot_y += cur_y;
		printf("%d x %d\n", tot_x, tot_y);
	}
	return 0;
}

