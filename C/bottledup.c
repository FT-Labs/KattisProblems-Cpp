#include <stdio.h>

int main ()
{
    int s, v1, v2;
    scanf("%d %d %d", &s, &v1, &v2);

    int t = (s/v1)*v1;
    while (t>=0 && (s-t)%v2 != 0)
        t -= v1;

    if (t>=0)
        printf("%d %d\n", t/v1, (s-t)/v2);
    else if (s%v2 == 0)
        printf("%d %d\n", 0, s/v2);
    else
        printf("Impossible\n");


    return 0;
}
