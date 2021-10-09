#include <iostream>
using namespace std;

int main()
{
	int b, k, g; cin >> b >> k >> g;

	int ans = (b-1)/(k/g);

	if((b-1)%(k/g) == 0)
		cout << ( !ans ? 1 : ans ) << endl;
	else
		cout << ++ans << endl;


	return 0;
}
