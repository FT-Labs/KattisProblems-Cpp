#include <iostream>
using namespace std;


int main()
{
	int n; cin >> n;
	int tot = 1-n;

	for(int i=0;i<n;i++)
	{
		int x; cin >> x;
		tot += x;
	}

	cout << tot << endl;


	return 0;
}
