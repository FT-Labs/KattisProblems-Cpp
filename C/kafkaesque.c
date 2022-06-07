#include <stdio.h>
#include <stdlib.h>

int cmp(const void *x, const void *y)
{
    return *(int *)x - *(int *)y;
}

int main ()
{
    int n;
    scanf("%d", &n);

    int tot = 1;
    int prev = -1;

    for (int i = 0; i < n; i++)
    {
        int cur;
        scanf("%d", &cur);

        if (prev > cur)
            tot++;
        prev = cur;
    }

    printf("%d", tot);



    return 0;
}
