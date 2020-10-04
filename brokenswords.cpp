#include <bits/stdc++.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	int tb=0,lr=0;
	string s;
	int n;
	cin >> n;
	cin.ignore();

	for(int i=0;i<n;++i)
	{
		getline(cin,s);
		for(int j=0;j<s.size();++j)
		{
			if (j<2)
			{
				if(s[j] == '0')
					++tb;
			}else{
				if(s[j] == '0')
					++lr;
			}
		}
	}
	int total = 0;

	int sw = min(tb/2,lr/2);
	total = sw*2;
	cout << sw << ' ' << tb - total << ' ' <<  lr - total;


	return 0;
}
