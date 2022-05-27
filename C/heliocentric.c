#include <stdio.h>

int main ()
{
    int e, m;
    int c = 1;

    while (scanf("%d %d", &e, &m) != EOF)
    {
        int days = 0;
        printf("Case %d: ", c);
        while (e || m)
        {
            e++, m++, days++;

            e %= 365, m %= 687;
        }
        c++;
        printf("%d\n", days);
    }
    return 0;
}
