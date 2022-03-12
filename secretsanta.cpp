#include <iostream>
using namespace std;

int main()
{
	int n; cin >> n;

	n = (n>=10 ? 10 : n);

	double ans = 1.0;
	long fact = 1;

	for(int i=2; i<=n; i++)
	{
		fact *= i;
		if((i&1))
			ans += 1.0/fact;
		else
			ans -= 1.0/fact;

	}

	cout.precision(9);

	cout << ans << endl;


	return 0;
}
