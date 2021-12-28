#include <iostream>
#include <limits>
using namespace std;

int main()
{
	int c; cin >> c;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	while (c--)
	{
		int n, m; cin >> n >> m;
		cin.ignore();

		while (m--)
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << --n << '\n';
	}

	return 0;
}
