#include <iostream>
using namespace std;


int main()
{
	int h; cin >> h;
	string q; cin >> q;

	int node = 1;

	for(auto ch : q)
	{
		node = 2*node + (ch=='R');
	}


	cout << ((1<<++h)-node) << endl;


	return 0;
}
