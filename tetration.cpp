#include <iostream>
#include <cmath>
using namespace std;



int main()
{

	double a; cin >> a;

	cout.precision(6);

	cout << fixed << pow(a, 1/a) << endl;



	return 0;
}
