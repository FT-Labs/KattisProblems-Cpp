#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int t; cin >> t;
	char c[t];

	for(int i=0; i<t; i++)
		cin >> c[i];

	unsigned long long tot = 0;
	for(int i=0; i<t; i++)
	{
		if(c[i] == 'O')
			tot += powl(2, t-i-1);
	}

	cout << tot << endl;

	return 0;
}
