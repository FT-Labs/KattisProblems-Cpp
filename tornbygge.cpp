#include <iostream>
using namespace std;


int main()
{
	int n; cin >> n;
	int tmp;
	int tot = 1;
	int prev; cin >> prev;

	while(--n)
	{
		cin >> tmp;

		if(tmp > prev)
			tot++;

		prev = tmp;
	}

	cout << tot << endl;

	return 0;
}
