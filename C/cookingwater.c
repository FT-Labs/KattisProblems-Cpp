#include <stdio.h>
#include <limits.h>
#define MAX(x,y) (x) > (y) ? (x) : (y)
#define MIN(x,y) (x) < (y) ? (x) : (y)

int main ()
{
    int n;
    scanf("%d", &n);
    int max_start = INT_MIN;
    int min_end = INT_MAX;
    for (int i = 0; i < n; i++) {
        int start, end;
        scanf("%d %d", &start, &end);
        max_start = MAX(max_start, start);
        min_end = MIN(min_end, end);
    }

    if (max_start <= min_end)
        printf("gunilla has a point\n");
    else
        printf("edward is right\n");

    return 0;
}
