#include <iostream>
#include <math.h>
using namespace std;


int main()
{
	int n; cin >> n;
	int arr[n];
	int sm = 0;

	for (int i=0; i<n; i++)
	{
		cin >> arr[i];
		sm += arr[i];
	}
	long ans = 0, sqrs = 0;

	for (int i=0; i<n-1; i++)
	{
		sqrs += arr[i]*arr[i];
		sm -= arr[i];
		ans = max(ans, sm*sqrs);
	}

	cout << ans << endl;

	return 0;
}
