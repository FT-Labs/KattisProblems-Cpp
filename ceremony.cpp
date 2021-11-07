#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int n; cin >> n;
	int arr[n];

	for (int i=0; i<n; i++)
		cin >> arr[i];

	sort(arr, arr+n);
	int ans = n;

	for (int i=0; i<n; i++)
	{
		ans = min(ans, n-i-1+arr[i]);
	}

	cout << ans << endl;


	return 0;
}
