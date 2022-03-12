#include <iostream>
using namespace std;


int main()
{
	int n; cin >> n;

	string s;

	for (int i=0; i<n; i++)
	{
		cin >> s;
		if(!(i&1))
			cout << s << endl;
	}


	return 0;
}
