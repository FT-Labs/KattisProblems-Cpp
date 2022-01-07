#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int n;

	int s = 1;
	while (cin >> n)
	{
		int arr[n];

		for (int i=0; i<n; i++)
			cin >> arr[i];

		sort(arr, arr+n);

		int q; cin >> q;
		cout << "Case " << s << ":\n";
		s++;
		for (int i=1; i<=q; i++)
		{
			int sum; cin >> sum;
			int closest = 1e9+3;

			int l = 0, r = n-1;

			while (l < r && sum != closest)
			{
				int cur = arr[l] + arr[r];

				if (abs(cur - sum) < abs(sum - closest))
					closest = cur;

				if (cur < sum)
					l++;
				else
					r--;
			}
			cout << "Closest sum to " << sum << " is " << closest << ".\n";
		}
	}


	return 0;
}
