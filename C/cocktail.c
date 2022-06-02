#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    return *((int *)b) - *((int *)a);
}


int main ()
{
    int n, sec;
    scanf("%d %d", &n, &sec);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    qsort(arr, n, sizeof(int), cmp);

    int rem = arr[0];

    for (int i = 1; i < n - 1; i++)
    {
        rem -= sec;
        rem = (rem < arr[i] ? rem : arr[i]);

        if (rem <= 0)
            break;
    }
    rem -= sec;

    printf("%s", rem <= 0 ? "NO" : "YES");

    return 0;
}
