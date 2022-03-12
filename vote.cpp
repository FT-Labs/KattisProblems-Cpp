#include <iostream>
#include <unordered_map>
using namespace std;


int main()
{
	int t; cin >> t;


	while(t--)
	{
		int n; cin >> n;
		unordered_map<int, int> mp;
		int arr[n];
		int tot = 0, mx = 0, idx = 0;

		for(int i=0; i<n; i++)
		{
			cin >> arr[i];
			tot += arr[i];
			if(arr[i] > mx)
				mx = arr[i], idx = i;
			mp[arr[i]]++;
		}

		if(mp[mx] >= 2)
		{
			cout << "no winner" << endl;
		}
		else
		{
			if(mx > tot/2)
				cout << "majority winner " << ++idx << endl;
			else
				cout << "minority winner " << ++idx << endl;
		}
	}


	return 0;
}
