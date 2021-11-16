#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, k; cin >> n >> k;

	int _gcd = 360;

	int x;

	while (n--)
	{
		cin >> x;
		_gcd = __gcd(_gcd, x);
	}

	while (k--)
	{
		cin >> x;

		if (x % _gcd == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}


	return 0;
}
