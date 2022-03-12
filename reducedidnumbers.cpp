#include <iostream>
#include <set>
#include <algorithm>
using namespace std;



void divisors(int arr[], int N)
{
	int start = N;

	//for(int i=start; i<*min_element(arr, arr+N)/2+1; i++)


	if(N != 1)
	{
		for(int i=start; i<1e6; i++)
		{
			set<int> s;

			for(int j=0; j<N; j++)
			{
				if(s.size() < j)
					break;

				s.insert(arr[j]%i);
			}

			if(s.size() == N)
			{
				cout << i << endl;
				return;
			}
		}
	}

	cout << 1 << endl;

}


int main()
{
	int n; cin >> n;
	int arr[n];

	for(int i=0; i<n; i++)
		cin >> arr[i];

	divisors(arr, n);



	return 0;
}
