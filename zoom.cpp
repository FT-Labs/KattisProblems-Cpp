#include <iostream>
using namespace std;

int main()
{
	int n, k; cin >> n >> k;
	string tmp;

	int cnt = 0;

	while (n--)
	{
		cin >> tmp;
		if (++cnt%k == 0)
			cout << tmp << ' ';
	}

	return 0;
}
