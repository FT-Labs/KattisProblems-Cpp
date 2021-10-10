#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define rep(i,a,b) for(__typeof(b) i=a; i<(b); ++i)

int v[] = {1, 5, 10, 25};
int main()
{
    int price, avail[4];
    cin >> price;
    rep(i,0,4) cin >> avail[i];
    vector<int> mx(price / 5 + 1, -1);

    mx[0] = 0;
    rep(j,1,4)
    {
        vector<int> cnt(mx.size(), 0);
        int upper = (int)mx.size() - v[j] / 5;
        rep(i,0,upper) if (mx[i] >= 0 && cnt[i] < avail[j])
            if (mx[i + v[j] / 5] == -1)
            {
                mx[i + v[j] / 5] = mx[i] + 1;
                cnt[i + v[j] / 5] = cnt[i] + 1;
            }
    }

    int res = -1;
    for (int i = 0; i * 5 <= price; i++)
        if (mx[i] >= 0 && price - i * 5 <= avail[0])
            res = max(res, mx[i] + price - i * 5);

    if (res == -1)
        cout << "Impossible" << endl;
    else
        cout << res << endl;

	return 0;
}
