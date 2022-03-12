#include <iostream>
using namespace std;


int main()
{
	int n; cin >> n;

	//8

	int left = ((n-2019)*12+8)%26;

	if(left+12>=26 || n == 2018)
		cout << "yes" << endl;
	else
		cout << "no" << endl;


	return 0;
}
