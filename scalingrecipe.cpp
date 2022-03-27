#include <iostream>
using namespace std;


int main()
{
	long long n, y, x; cin >> n >> y >> x;

	long long tmp, ans;
	while (n--)
	{
		cin >> tmp;
		ans = ((tmp*x) / y);
		cout << ans << endl;
	}

	return 0;
}
