#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int w=0,b=0;
	string s;

	getline(cin,s);
	for(int i=0;i<s.size();++i)
	{
		if(s[i]=='W')
			++w;
		else
			++b;
	}

	if(w==b)
		cout << '1' << flush;
	else
		cout << '0' << flush;

	return 0;
}
