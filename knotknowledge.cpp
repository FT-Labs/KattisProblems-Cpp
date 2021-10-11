#include <iostream>
using namespace std;

int main()
{
	int n; cin >> n;

	int arr[n];
	int arr1[n-1];

	for(int i=0; i<n; i++)
		cin >> arr[i];

	for(int i=0; i<n-1; i++)
		cin >> arr1[i];


	for(int i=0; i<n; i++)
	{
		bool flag = false;
		for(int j=0; j<n-1; j++)
		{
			if(arr[i] == arr1[j])
			{
				flag = true;
				break;
			}
		}

		if(!flag)
		{
			cout << arr[i] << endl;
			goto end;
		}
	}


end:
	return 0;
}
