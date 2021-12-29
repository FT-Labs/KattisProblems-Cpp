#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	long n, tot; cin >> n >> tot;

	int arr[n];

	for (int i=0; i<n; i++)
		cin >> arr[i];

	sort(arr, arr+n);

	long long ans = 0, i = 0;

	while (i < n && tot > arr[i])
	{
		ans++;
		tot -= arr[i] + 1;
		i++;
	}

	cout << ans << endl;



	return 0;
}
