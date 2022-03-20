#include <iostream>
using namespace std;

int main()
{
	int tot = 0;

	string s;
	getline(cin, s);

	for (auto ch : s)
	{
		tot += ch;
	}

	cout << (char) (tot / s.size()) << endl;

	return 0;
}
