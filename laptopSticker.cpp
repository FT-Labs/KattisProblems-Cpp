#include <iostream>
using namespace std;

int main()
{
	int lw,lh,sw,sh;
	cin >> lw >> lh >> sw >> sh;

	int a = lw-sw;
	int b = lh-sh;

	if(a>1 && b > 1)
		cout << 1 << endl;
	else
		cout << 0 << endl;

	return 0;
}
