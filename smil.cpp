#include <iostream>
using namespace std;

int main()
{
	string s; cin >> s;

	for(int i=0; i<s.size()-2; i++)
	{
		if((s[i] == ';' || s[i] == ':') && s[i+1] == ')')
			cout << i << endl;
		else if((s[i] == ';' || s[i] == ':') && s[i+1] == '-' && s[i+2] == ')')
			cout << i << endl;
	}

	if((s[s.size()-2] == ';' || s[s.size()-2] == ':') && s[s.size()-1] == ')')
		cout << s.size()-2 << endl;

	return 0;
}
