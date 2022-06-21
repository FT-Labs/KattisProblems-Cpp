#include <stdio.h>
#include <stdlib.h>

int cmp(const void *x, const void  *y)
{
    return *(int *)x - *(int *)y;
}

int main ()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    qsort(arr, n, sizeof(int), cmp);

    int tot = 0;
    int cur = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] - arr[i-1] == 1)
            continue;
        tot += cur;
        cur = arr[i];
    }

    printf("%d\n", tot+cur);



    return 0;
}
