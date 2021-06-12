#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string s1,s2;
	cin >> s1 >> s2;

	while(s2.back() == '0' && s1.back() == '0')
	{
		s1.pop_back();
		s2.pop_back();
	}


	long long len = s1.length() - s2.length() +1;

	if(len == s1.length())
	{
		cout << s1 << endl << flush;
	}
	else if(s2.length() > s1.length())
	{
		cout << "0.";
		for(int i=0;i<s2.length()-s1.length()-1;++i)
			cout << '0';
		cout << s1 << endl << flush;
	}else{
		if(len == 0)
			cout << '0';
		else
		{
		for(int i=0;i<len;++i)
			cout << s1[i];
		cout << '.';
		for(int i=len;i<s1.size();++i)
			cout << s1[i];
		}
		cout << endl << flush;
	}
	return 0;

}
