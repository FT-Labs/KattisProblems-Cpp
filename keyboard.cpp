#include <iostream>
using namespace std;


int main()
{
	string s1, s2;
	getline(cin , s1);
	getline(cin, s2);

	int s1arr[26] = {0}, s2arr[26] = {0};

	int sp1 = 0;
	int sp2 = 0;

	for(auto ch : s1)
	{
		if(ch == ' ')
			sp1++;
		else
			s1arr[ch-'a']++;
	}
	for(auto ch : s2)
	{
		if(ch == ' ')
			sp2++;
		else
			s2arr[ch-'a']++;
	}

	string ans;

	if(sp1*2 == sp2 && sp1)
		ans += ' ';

	for(int i=0; i<26; i++)
	{
		if(s1arr[i] != 0 && s1arr[i]*2 == s2arr[i])
			ans += 'a'+i;
	}

	cout << ans << endl;


	return 0;
}
