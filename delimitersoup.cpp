#include <iostream>
#include <stack>
using namespace std;


int main()
{
	int n; cin >> n; cin.ignore();
	string q; getline(cin, q);


	stack<char> s;

	for(int i=0; i<q.size();i++)
	{
		if(q[i] == ' ')
			continue;

		if(q[i] == '(' || q[i] == '[' || q[i] == '{')
		{
			s.push(q[i]);
		}
		else
		{
			if(s.empty())
			{
				cout << q[i] << ' ' << i << endl;
				return 0;
			}
			else
			{
				char cur = s.top(); s.pop();


				if(cur == '(' && q[i] != ')')
				{
					cout << q[i] << ' ' << i << endl;
					return 0;
				}
				else if(cur == '[' && q[i] != ']')
				{
					cout << q[i] << ' ' << i << endl;
					return 0;
				}
				else if(cur == '{' && q[i] != '}')
				{
					cout << q[i] << ' ' << i << endl;
					return 0;
				}
			}
		}
	}


	cout << "ok so far" << endl;






	return 0;
}
