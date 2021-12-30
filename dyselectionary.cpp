#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;

bool cmp(string s1, string s2)
{
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());

	return s1 < s2;
}

int main()
{
	string s;

	vector<string> v;
	int mx = 0;
	while (getline(cin, s))
	{
		if (s == "")
		{
			sort(v.begin(), v.end(), cmp);

			for (auto it : v)
				cout << setw(mx) << it << endl;

			cout << endl;
			v.clear();
			mx = 0;
			continue;
		}

		v.push_back(s);
		mx = max(mx, (int)s.size());
	}

	sort(v.begin(), v.end(), cmp);

	for (auto it : v)
		cout << setw(mx) << it << endl;



	return 0;
}
