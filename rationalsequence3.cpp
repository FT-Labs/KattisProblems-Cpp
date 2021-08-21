#include <iostream>
#include <stack>
using namespace std;


int main()
{
	stack<char> s;

	int n; cin >> n;
	int index, node;
	while(n--)
	{
		cin >> index >> node;

		while(node != 1)
		{
			if((node&1))
				s.push('R');
			else
				s.push('L');

			node /= 2;
		}

		int p = 1, q = 1;

		while(!s.empty())
		{
			if(s.top() == 'R')
				q = p + q;
			else
				p = p + q;

			s.pop();
		}


		cout << index << ' ' << q << '/' << p << endl;
	}


	return 0;
}
