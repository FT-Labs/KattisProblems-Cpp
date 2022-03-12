#include <iostream>
using namespace std;


int main()
{
	string x, y; cin >> x >> y;


	for(int i=0; i<x.size(); i++)
	{
		if((i&1))
			x[i] = 'A' + (x[i] + y[i] - 2*'A')%26;
		else
		{
			int diff = (26 + (x[i] - 'A') - (y[i] - 'A'))%26;
			x[i] = 'A' + diff;
		}
	}

	cout << x << endl;

	return 0;
}
