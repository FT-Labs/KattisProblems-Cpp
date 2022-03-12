#include <iostream>
using namespace std;


int main()
{
	int n, t; cin >> n >> t;

	int cnt = 0;
	int tot = 0;

	while(n--)
	{
		int cur; cin >> cur;

		tot += cur;

		if(tot > t)
			break;

		cnt++;
	}

	cout << cnt << endl;

	return 0;
}
