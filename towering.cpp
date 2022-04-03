#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr[6];
	int l, r;

	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}
	cin >> l >> r;

	sort(arr, arr+6);

	do {
		if (arr[0] > arr[1] && arr[1] > arr[2] && (arr[0] + arr[1] + arr[2] == l) 
				&& arr[3] > arr[4] && arr[4] > arr[5] && (arr[3] + arr[4] + arr[5] == r))
			break;
	} while(next_permutation(arr, arr+6));

	for (auto it : arr)
	{
		cout << it << ' ';
	}

	return 0;
}
