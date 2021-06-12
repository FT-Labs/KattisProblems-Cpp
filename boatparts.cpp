#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;


int main()
{
	int p,n;
	cin >> p >> n;
	int found = 0;
	unordered_set<string> memo;

	for(int i=1;i<n+1;++i)
	{
		string s;
		cin >> s;
		memo.insert(s);

		if(found == 0 && memo.size() == p)
		{
			found = i;
		}

	}
	string m = found == 0 ? "paradox avoided" : to_string(found);
	cout << m << endl;

	return 0;
}
