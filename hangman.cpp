#include <set>
#include <iostream>
using namespace std;

int main()
{
	string ans, perm; cin >> ans >> perm;

	set<char> aset, bset;

	for(auto ch : ans)
		aset.insert(ch);

	int cnt = 0;
	for(auto ch : perm)
	{
		if(aset.count(ch))
		{
			bset.insert(ch);

			if(bset.size() == aset.size())
				break;
		}
		else
			cnt++;
	}

	if(cnt<10 && bset.size() == aset.size())
		cout << "WIN" << endl;
	else
		cout << "LOSE" << endl;





	return 0;
}
