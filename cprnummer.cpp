#include <iostream>
using namespace std;

int main()
{
	int muls[] = {4, 3, 2, 7, 6, 5, 4, 3, 2, 1};

	string s; cin >> s;

	int tot = 0, idx = 0;

	for (auto ch : s)
	{
		if (ch == '-')
		{
			continue;
		}

		tot += muls[idx] * (ch - '0');
		idx++;
	}

	cout << (tot%11 == 0 ? 1 : 0) << endl;

	return 0;
}
