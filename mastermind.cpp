#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
	int n; cin >> n;
	string s1, s2; cin >> s1 >> s2;
	set<char> se;
	int mn[26]{0}, mn1[26]{0};

	int r = 0, s = 0;

	for (int i=0; i<s1.size(); i++)
	{
		if (s1[i] == s2[i])
			r++;
		else
			mn[s1[i]-'A']++,mn1[s2[i]-'A']++;
	}

	for (int i=0; i<26; i++)
		s += min(mn[i], mn1[i]);



	cout << r << " " << s << endl;


	return 0;
}
