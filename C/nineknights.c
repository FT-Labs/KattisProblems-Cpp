#include <stdio.h>
#define BETWEEN(x, a, b)    ((a) <= (x) && (x) <= (b))

int check(char board[5][5], int i, int j)
{
    int arr[] = {i+2, j+1, i+2, j-1, i-2, j+1, i-2, j-1, i+1, j+2, i+1, j-2, i-1, j+2, i-1, j-2};

    for (int k = 0; k < 16; k+=2) {
        if (BETWEEN(arr[k], 0, 4) && BETWEEN(arr[k+1], 0, 4)) {
            if (board[arr[k]][arr[k+1]] == 'k')
                return 0;
        }
    }
    return 1;
}

int main ()
{
    char board[5][5];
    int cnt = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%s", board[i]);
    }

    int flag = 1;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (board[i][j] == 'k') {
                cnt++;
                flag = check(board, i, j);
                if (!flag) {
                    goto end;
                }
            }
        }
    }
end:
    printf("%s", (flag && cnt == 9) ? "valid" : "invalid");

    return 0;
}
