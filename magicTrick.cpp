#include <iostream>
#include <set>
using namespace std;


int main()
{
	set<char> se;

	string s; cin >> s;

	for(auto it : s)
		se.insert(it);

	cout << (se.size() == s.size() ? 1 : 0);

	return 0;
}
