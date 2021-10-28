#include <iostream>
#include <unordered_set>
#include <cstring>
using namespace std;

int main()
{
	int t; cin >> t;

	unordered_multiset<int> umuls;
	int x;
	for (int i = 0; i < t; i++)
	{
		cin >> x;

		if (umuls.count(x+1))
			umuls.erase(umuls.find(x+1));
		umuls.insert(x);
	}


	cout << umuls.size() << endl;


	return 0;
}
