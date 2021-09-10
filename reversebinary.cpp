#include <iostream>
using namespace std;


int main()
{
	int n; cin >> n;
	int res = 0;


	while(n)
	{
		res <<= 1;
		res |= (n&1);
		n >>= 1;
	}

	cout << res << endl;

	return 0;
}
