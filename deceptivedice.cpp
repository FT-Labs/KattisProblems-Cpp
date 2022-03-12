#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	long double n, k; cin >> n >> k;
	long double sm = (n * (n+1))/(2*n);
	long double ans = sm;
	ans = sm;

	for (int i=1; i<k && n != 1; i++)
	{
		long double cur = ceil(ans)-1;
		ans = (sm-cur*(cur+1)/(2*n)) + cur*ans/n;
	}

	cout.precision(10);
	cout << fixed << ans << endl;

	return 0;
}
