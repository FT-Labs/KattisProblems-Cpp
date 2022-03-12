#include <iostream>
using namespace std;

int main()
{
	double n; cin >> n;

	if(n>=1.0)
		cout << 0.25 << endl;
	else
	{
		double ans = (n/2.0)*(n/2.0);
		cout.precision(7);
		cout << fixed << ans << endl;
	}

	return 0;
}
