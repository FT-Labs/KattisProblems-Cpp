#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	int n; cin >> n;
	vector<pair<int, int>> v(n);

	for (int i=0; i<n; i++)
	{
		cin >> v[i].first;
		v[i].second = i+1;
	}

	sort(v.begin(), v.end(), greater<>());

	int tot = 0;

	for (int i=1; i<n; i++)
		tot += v[i].first;

	if (tot < v[0].first)
		cout << "impossible" << endl;
	else
		for (auto it : v)
			cout << it.second << ' ';

	cout << endl;


	return 0;
}
