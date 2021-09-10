#!/usr/bin/python


n = 100

for i in range(1, n+1):

    cur = "1"
    cnt = 1

    if i%2 != 0 and i%5 != 0:
        while int(cur)%i != 0:
            cur += "1"
            cnt += 1

        print(i , " " , cnt)
