#include <iostream>
using namespace std;


int main()
{
	int g, t, n; cin >> g >> t >> n;
	int tot = (g - t) * 0.9;


	int tmp;
	while (n--)
	{
		cin >> tmp;
		tot -= tmp;
	}

	cout << tot << endl;

	return 0;
}
