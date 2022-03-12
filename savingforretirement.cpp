#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int b, br, bs, a, as; cin >> b >> br >> bs >> a >> as;

	int bob = (br-b) * bs;

	int totYears = bob/as;

	cout << (totYears*as <= bob ? a+totYears+1 : a+totYears) << endl;

	return 0;

}
