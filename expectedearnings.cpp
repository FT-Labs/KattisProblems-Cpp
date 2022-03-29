#include <iostream>
using namespace std;


int main()
{
	long double n, k, p;
	cin >> n >> k >> p;



	if (-k * (1-p) + (n-k) * p < 0)
		cout << "spela" << endl;
	else
		cout << "spela inte!" << endl;


	return 0;
}
