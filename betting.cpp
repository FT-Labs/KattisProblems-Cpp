#include <iostream>
using namespace std;


int main()
{
	float one; cin >> one;

	cout.precision(4);

	float ones = 100.0 / one;
	float twos = 100.0 / (100.0 - one);

	cout << fixed << ones << endl << twos << endl;

	return 0;
}
