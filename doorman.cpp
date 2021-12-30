#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

int main()
{
	int maxAbs; cin >> maxAbs;

	string s; cin >> s;

	int diff = 0, tot = 0;

	for (int i=0; i<s.size(); i++)
	{
		if (s[i] == 'W')
			diff--;
		else
			diff++;

		if (i < s.size()-1 && abs(diff) > maxAbs)
		{
			if ((diff < 0 && s[i+1] == 'M') || (diff > 0 && s[i+1] == 'W'))
			{
				tot++;
				continue;
			}
			else
				break;

		}
		tot++;
	}

	cout << tot << endl;

	return 0;
}
