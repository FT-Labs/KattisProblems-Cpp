#include <iostream>
using namespace std;


#define TOT 210

int main()
{
	int cur, q; cin >> cur >> q;
	int totTime = 0;

	while(q--)
	{
		int passed;
		char query;
		cin >> passed >> query;

		totTime += passed;

		if(totTime >= TOT)
		{
			cout << cur << endl;
			break;
		}

		if(query == 'T')
			cur = cur%8+1;
	}

	return 0;
}
