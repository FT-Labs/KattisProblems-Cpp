#include <iostream>
using namespace std;

typedef unsigned long long ull;

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		ull candies = 0;
		int cnt;
		cin >> cnt;

		for(int i=0;i<cnt;i++)
		{
			ull x;
			cin >> x;
			candies += x%cnt;
		}

		cout << (candies%cnt == 0 ? "YES" : "NO") << endl;
	}

	return 0;
}
