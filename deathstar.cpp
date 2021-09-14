#include <iostream>
using namespace std;


int main()
{
	int n; cin >> n;

	int arr[n];

	fill(arr, arr+n, 0);

	int x;

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin >> x;
			arr[i] |= x;
		}
	}

	for(auto it : arr)
		cout << it << ' ';

	return 0;
}
