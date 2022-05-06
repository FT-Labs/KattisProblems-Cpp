#include <stdio.h>
#include <math.h>

#define RAD 8.0f

int main ()
{
	int m;
	scanf("%d", &m);

	while (m--)
	{
		short flag = 0;
		float x, y;
		int c;
		scanf("%f %f", &x, &y);
		scanf("%d", &c);

		while (c--)
		{
			float x_cur, y_cur;
			scanf("%f %f", &x_cur, &y_cur);

			float r = hypotf(x_cur - x, y_cur - y);

			if (r <= 8.0f)
				flag = 1;
		}
		flag ? printf("light a candle\n") : printf("curse the darkness\n");
	}

	return 0;
}

