#include <stdio.h>


int main ()
{
	int h, t;

	while (scanf("%d %d", &h, &t) && (h || t))
	{
		int ans = 0;
		if (t == 0)
			ans = -1;
		else
		{
			int heads;
			while ((heads = h + t / 2) % 2 != 0 || t % 2 != 0)
				t++, ans++;
			ans += t/2 + heads/2;
		}
		printf("%d\n", ans);
	}

	return 0;
}

