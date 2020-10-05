#include <bits/stdc++.h>
#include <set>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	set<int> days;
	int n;
	cin >> n;

	for(int i=0;i<n;++i)
	{
		int m,q;
		cin >> m >> q;
		for(int i=m;i<=q;++i)
			days.insert(i);
	}

	cout << days.size() << flush;
	return 0;

}
