#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int is_prime(int n)
{
    if (n == 1)
        return 0;
    else if (n <= 3)
        return 1;
    for (int i = 2; i * i <= n; i++)
        if (n%i == 0)
            return 0;
    return 1;
}


int main ()
{
    int c;
    scanf("%d", &c);
    for (int i = 0; i < c; i++)
    {
        int n, p;
        scanf("%d %d", &n, &p);

        if (!is_prime(p))
            printf("%d %d NO\n", n, p);
        else
        {
            int ans = 0;
            int tmp = p;
            int loop_count = 0;
            while (1)
            {
                int cur = 0;
                while (tmp)
                {
                    cur += (tmp%10) * (tmp%10);
                    tmp /= 10;
                }

                if (loop_count > 500 || (ans = cur) == 1)
                    break;
                tmp = cur;
                loop_count++;
            }

            if (ans == 1)
                printf("%d %d YES\n", n, p);
            else
                printf("%d %d NO\n", n, p);
        }

    }

    return 0;
}
