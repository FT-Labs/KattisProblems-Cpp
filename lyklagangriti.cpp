#include <iostream>
#include <list>

using namespace std;

int main ()
{
	list<char> l;
	string s; cin >> s;

	auto it = l.begin();

	for (auto ch : s)
	{
		if (ch == 'L')
			--it;
		else if (ch == 'R')
			++it;
		else if (ch == 'B')
		{
			it--; it = l.erase(it);
		}
		else
		{
			it = l.insert(it, ch); it++;
		}
	}

	for (auto ch : l)
	{
		cout << ch;
	}

	return 0;
}
