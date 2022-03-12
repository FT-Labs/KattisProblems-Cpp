#include <iostream>
using namespace std;

int main()
{
	int cur = 7;
	int n; cin >> n;
	cin.ignore();

	string s;
	while (n--)
	{
		getline(cin, s);

		if (cur < 10 && s == "Skru op!")
		{
			cur++;
		}
		else if (cur > 0 && s == "Skru ned!")
			cur--;
	}

	cout << cur << endl;

	return 0;
}
