#include <iostream>
#include <set>
using namespace std;


int main()
{
	set<string> s;

	string tmp;

	while(cin >> tmp)
	{
		if(s.count(tmp))
		{
			cout << "no" << endl;
			return 0;
		}
		s.insert(tmp);
	}

	cout << "yes" << endl;

	return 0;
}
