#include <iostream>
using namespace std;


int main()
{
	int n; cin >> n;
	int tot = 0;
	int b;

	while(n--)
	{
		cin >> b; tot += b;
	}


	cout << tot << endl;


	return 0;
}
