#include <stdio.h>

int main ()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int arr[3];
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

    int dog1 = a+b, dog2 = c+d;

    for (int i = 0; i < 3; i++)
    {
        int d1 = arr[i] % dog1, d2 = arr[i] % dog2;

        if (d1 && d1 <= a && d2 && d2 <= c)
            printf("both\n");
        else if ((d1 && d1 <= a) || (d2 && d2 <= c))
            printf("one\n");
        else
            printf("none\n");
    }


    return 0;
}
