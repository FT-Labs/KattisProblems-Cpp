#include <stdio.h>

int main ()
{
	char n1[4], n2[4];
	scanf("%s\n%s", n1, n2);
	int cnt = 0;

	for (int i = 0; i < 4; i++)
		if (n1[i] != n2[i])
			++cnt;

	printf("%d", (1 << cnt));

	return 0;
}
