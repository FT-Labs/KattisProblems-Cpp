#include <iostream>
using namespace std;

int main()
{
	int x; char c; string ans;
	int q[27] {0};
	int tot = 0;
	int solved = 0;

	while(x != -1)
	{
		cin >> x;

		if( x == -1 )
			break;

		cin >> c >> ans;

		if(ans == "right")
		{
			tot += 20*q[c-'A'] + x;
			solved++;
		}
		else
			q[c-'A']++;
	}

	cout << solved << ' ' << tot << endl;

	return 0;
}
