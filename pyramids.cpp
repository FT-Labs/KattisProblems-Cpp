#include <iostream>
using namespace std;


int main()
{
	int n; cin >> n;
	int tot = 0, i = 1;

	while (n>0)
	{
		tot++;
		n -= i*i;
		i += 2;
	}

	cout << (n == 0 ? tot : tot-1)<< endl;

	return 0;
}
