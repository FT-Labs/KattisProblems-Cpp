#include <iostream>
using namespace std;


int main()
{
	int n; cin >> n;

	if(n<4)
		cout << 0 << endl;
	else
		cout << (n-3) * (n-2) * (n-1) * n/24 << endl;


	return 0;
}
