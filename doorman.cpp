#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

int main()
{
	int maxAbs; cin >> maxAbs;

	string s; cin >> s;

	int diff = 0, tot = 0;

	queue<int> qu;

	for (auto ch : s)
	{
		if (ch == 'W')
			diff--;
		else
			diff++;


		while (!qu.empty() && abs(diff) > maxAbs)
		{
			tot = max(tot, (int)qu.size());
			diff += qu.front(); qu.pop();
		}

		qu.push((ch == 'W' ? -1 : 1));
	}

	cout << (tot > qu.size() ? tot : qu.size()) << endl;



	return 0;
}
