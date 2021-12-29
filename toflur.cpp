#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

typedef long long ll;

int main()
{
	int n; cin >> n;

	ll arr[n];

	for (int i=0; i<n; i++)
		cin >> arr[i];

	sort(arr, arr+n);

	ll tot = 0;

	for (int i=0; i<n-1; i++)
		tot += pow(arr[i] - arr[i+1], 2);

	cout << tot << endl;

	return 0;
}
