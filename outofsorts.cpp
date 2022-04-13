#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

bool binsearch(ull arr[], ull l, ull r, ull key)
{
	ull sz = r;
	while (l <= r)
	{
		ull mid = (l + r) / 2;
		if (l < 0 || r < 0 || l > sz || r > sz)
			return false;
		else if (arr[mid] == key)
			return true;

		if (arr[mid] > key)
			r = mid-1;
		else
			l = mid+1;
	}
	return false;
}


int main (int argc, char *argv[])
{
	ull n, m, a, c, x0;
	cin >> n >> m >> a >> c >> x0;

	ull arr[n];
	arr[0] = (a * x0 + c) % m;

	for (int i = 1; i < n; i++)
	{
		arr[i] = (a * arr[i-1] + c) % m;
	}

	int tot = 0;

	for (auto it : arr)
	{
		if (binsearch(arr, 0, n-1, it))
			tot++;
	}

	cout << tot << endl;

	return 0;
}
