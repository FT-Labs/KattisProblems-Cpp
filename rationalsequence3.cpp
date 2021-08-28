#include <iostream>
#include <stack>
using namespace std;


void rec(int n, int* p, int* q)
{
	if(n == 1)
	{
		*p=1, *q=1;
		return;
	}

	rec(n/2, p, q);

	if(!(n&1))
		*p += *q;
	else
		*q += *p;

	return;

}


int main()
{
	stack<char> s;

	int n; cin >> n;
	int index, node;

	while(n--)
	{
		cin >> index >> node;
		int p = 0, q = 0;

		rec(node, &p, &q);



		cout << index << ' ' << q << '/' << p << endl;
	}


	return 0;
}
