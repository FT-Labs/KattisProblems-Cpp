#include <iostream>
using namespace std;


int main()
{
	int n; cin >> n;

	while(n--)
	{
		int t; cin >> t;

		int tot = 0;

		for(int i=0;i<t;i++)
		{
			int q; cin >> q;
			tot += q;
		}

		cout << (tot-t+1) << endl;

	}

	return 0;
}
