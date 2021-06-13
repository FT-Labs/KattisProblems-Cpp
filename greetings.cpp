#include <iostream>
using namespace std;

int main()
{
	string s; cin >> s;

	if(s == "Later!")
		cout << "Alligator!" << endl;
	else
	{
		string ans = "h";

		for(int i=0;i<2*(s.size()-2);i++)
		{
			ans += 'e';
		}

		ans += 'y';

		cout << ans << endl;
	}

	return 0;
}
