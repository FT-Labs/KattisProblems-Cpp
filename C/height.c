#include <stdio.h>

int insertion_sort(int arr[], int n)
{
    int cnt = 0;

    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i-1;

        while (j >= 0 && arr[j] > key)
        {
            cnt++;
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    return cnt;
}


int main ()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int c; scanf("%d", &c);
        int arr[20];
        for (int j = 0; j < 20; j++)
            scanf("%d", &arr[j]);

        int ans = insertion_sort(arr, 20);
        printf("%d %d\n", c, ans);
    }



    return 0;
}
