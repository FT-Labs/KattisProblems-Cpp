#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

typedef long long ll;
typedef long double ld;

int main() {
    ll n;
    cin >> n;
    n--;

	ll v[n];
	for(int i=0; i<n; i++)
		cin >> v[i];

    ld totalcost = 0;
    ll req = 1;
    bool enough = false;

    ld lng  = pow(2.0, -3/4.0);
    ld shrt = pow(2.0, -5/4.0);

    cout.precision(9);

    for(ll i = 0; i < n; i++) {
        totalcost += req * lng;
        swap(shrt, lng);
        shrt /= 2;

        req = 2*req - v[i];

        if(req <= 0) {
			cout << fixed << totalcost << endl;
			goto end;
        }
    }


	cout << "impossible" << endl;

end:
	return 0;
}
