#include <iostream>
using namespace std;


int main()
{
	string s; cin >> s;

	int half = s.length()/2;

	int totl = 0;
	int totr = 0;

	for(int i=0; i<s.size(); i++)
	{
		if(i < half)
			totl += s[i] - 'A';
		else
			totr += s[i] -'A';
	}


	for(int i=0; i<half; i++)
	{
		int add = (totl + totr + s[i+half] - 'A' + s[i] - 'A')%26;

		s[i] = 'A' + add;
	}


	cout << s.substr(0, half) << endl;




	return 0;
}
