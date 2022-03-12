#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	long long n; cin >> n;

	if (n%2 != 0)
		cout << n/2+1 << ' ' << n/2 << endl;
	else if (n%4 == 0)
		cout << n/4+1 << ' ' << n/4-1 << endl;
	else
		cout << "impossible" << endl;

	return 0;
}
