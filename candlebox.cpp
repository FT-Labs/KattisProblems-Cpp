#include <iostream>
using namespace std;

int main()
{
	int diff, rita, theo; cin >> diff >> rita >> theo;

	int tot = rita + theo + 9;

	// rita -> -6, theo -> -3

	int n = 1, cur = 0;

	while (cur != tot)
	{
		cur = n * (n+1) / 2 + (n - diff + 1) * (n - diff) / 2;
		n++;
	}



	cout << rita - (n * (n-1) / 2 - 6) << endl;


	return 0;
}
