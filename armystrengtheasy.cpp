#include <vector>
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;

	cin >> n;

	for(int i=0;i<n;++i)
	{
		vector<int> godzilla;
		vector<int> mechagodzilla;
		int x,y;
		cin >> x >> y;

		for(int j=0;j<x;++j)
		{
			int z;
			cin >> z;
			godzilla.push_back(z);
		}

		for(int k=0;k<y;++k)
		{
			int z;
			cin >> z;
			mechagodzilla.push_back(z);
		}

		sort(godzilla.begin(),godzilla.end());
		sort(mechagodzilla.begin(),mechagodzilla.end());

		if((godzilla.back()>=mechagodzilla.back()) && godzilla.back()!=0)
			cout << "Godzilla" << endl;
		else if(godzilla.back() == 0 && mechagodzilla.back() == 0)
			cout << "uncertain" << endl;
		else
			cout << "MechaGodzilla" << endl;
	}

	return 0;


}

