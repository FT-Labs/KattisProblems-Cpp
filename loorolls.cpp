#include <iostream>
using namespace std;

typedef unsigned long long ull;

int main()
{
	ull l, n; cin >> l >> n;

	ull tot = 0;
	ull res = l%n;

	while(res)
	{
		tot++;
		n -= res;
		res = l%n;
	}

	cout << ++tot << endl;


	return 0;
}
