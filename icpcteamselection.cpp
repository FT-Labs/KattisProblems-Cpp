#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int t; cin >> t;

	while (t--)
	{
		int n; cin >> n;
		n *= 3;
		int arr[n];

		for (int i=0; i<n; i++)
			cin >> arr[i];

		sort(arr, arr+n);

		int med = 0;
		int j = n-2;

		for (int i=0; i<n/3; i++)
		{
			med += arr[j];
			j -= 2;
		}

		cout << med << endl;

	}

	return 0;
}
