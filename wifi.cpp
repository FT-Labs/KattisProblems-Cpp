#include <iostream>
#include <algorithm>
using namespace std;

int calc(int* arr, int m, int mid)
{
	int cur = 0;
	int pos = -1;

	for (int i=0; i<m; i++)
	{
		if (arr[i] > pos)
		{
			cur++;
			pos = mid + arr[i];
			cout << pos << endl;
		}
	}
	return cur;
}

int main()
{
	int t; cin >> t;

	while (t--)
	{
		int n, m; cin >> n >> m;
		int arr[m];

		for (int i=0; i<m; i++)
			cin >> arr[i];

		if (n >= m)
		{
			cout << "0.0" << endl; continue;
		}

		sort(arr, arr+m);

		long low = 0, high = arr[m-1] - arr[0];

		// kinda like binary search
		while (high > low)
		{
			int mid = (low+high)/2;
			int curNum = calc(arr, m, mid);

			(curNum > n ? low = mid+1 : high = mid);
		}

		cout.precision(1);
		cout << fixed << high/2.0 << endl;
	}

	return 0;
}
