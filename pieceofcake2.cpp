#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int n, h, v; cin >> n >> h >> v;

	int ans = 1;

	if(h>=ceil(n/2.0))
		ans *= h;
	else
		ans *= (n-h);

	if(v>=ceil(n/2.0))
		ans *= v;
	else
		ans *= (n-v);

	cout << ans*4 << endl;



	return 0;
}
