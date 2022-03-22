#include <functional>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n; cin >> n;
	int maxVotes = 0;

	int arr[n];

	for (int i=0; i<n; i++) cin >> arr[i];

	sort(arr, arr+n, greater<int>());

	for (int i = 0; i < n; i++) {
		if (i < n/2)
			maxVotes += arr[i];
		else
			maxVotes += arr[i]/2;
	}

	cout << maxVotes << endl;

	return 0;
}
