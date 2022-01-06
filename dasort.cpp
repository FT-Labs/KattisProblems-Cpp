#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int q; cin >> q;

	while (q--)
	{
		int idx, n;
		cin >> idx >> n;
		int arr[n], arr1[n];

		for (int i=0; i<n; i++)
		{
			cin >> arr[i];
			arr1[i] = arr[i];
		}

		sort(arr1, arr1+n);
		int same = 0;
		int id = 0;

		for (int i=0; i<n; i++)
		{
			if (arr[i] == arr1[id])
			{
				same++;
				id++;
			}
		}

		cout << idx << ' ' << n-same << endl;
	}

	return 0;
}
