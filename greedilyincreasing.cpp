#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int n; cin >> n;

	n--; int x; cin >> x;
	int last = x; int cnt = 1;
	string ans = to_string(x) + " ";

	while (n--)
	{
		cin >> x;

		if (x > last)
		{
			cnt++;
			last = x;
			ans += to_string(last) + " ";
		}
	}

	cout << cnt << endl << ans << endl;


	return 0;
}
