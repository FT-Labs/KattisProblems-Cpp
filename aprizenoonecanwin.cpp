#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, mx; cin >> n >> mx;

	int arr[n];

	for(int i=0; i<n; i++)
		cin >> arr[i];


	sort(arr, arr+n);

	int cnt = 1;
	int prev = arr[0];

	if(n == 2)
	{
		if (arr[0] + arr[1] > mx)
		{
			cnt = 1;
		}
		else
			cnt = 2;
	}
	else if(prev <= mx)
	{
		for(int i=1; i<n; i++)
		{
			if(arr[i] + prev > mx)
				break;

			cnt++;
			prev = arr[i];
		}
	}

	cout << cnt << endl;



	return 0;
}
