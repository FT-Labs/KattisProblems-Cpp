#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int solve(char **arr, int n, int m)
{
    int cnt = 1;

    for (int j = 0; j < m; j++)
    {
        int flag = 1;

        for (int i = 0; i < n; i++)
        {
            if (arr[i][j] == '$')
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            cnt++;
    }
    return cnt;
}

int main ()
{
    int n, m;
    scanf("%d %d", &n, &m);

    char **arr = malloc(sizeof(char *) * n);

    for (int i = 0; i < n; i++)
        arr[i] = malloc(sizeof(char) * m + 1);


    for (int i = 0; i < n; i++)
    {
        char s[m+1];
        scanf("%s", s);
        strcpy(arr[i], s);
    }

    printf("%d\n", solve(arr, n, m));

    for (int i = 0; i < n; i++)
    {
        free(arr[i]);
    }
    free(arr);


    return 0;
}
