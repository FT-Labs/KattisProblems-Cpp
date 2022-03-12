#include <iostream>
#include <stack>
#include <queue>
using namespace std;


int main()
{
	int n;

	while (cin >> n)
	{
		bool sb = true, qb = true, pqb = true;
		stack<int> s;
		queue<int> q;
		priority_queue<int> pq;

		int op, x;

		while (n--)
		{
			cin >> op >> x;

			if (op == 1)
			{
				if (sb)
					s.push(x);
				if (qb)
					q.push(x);
				if (pqb)
					pq.push(x);
			}
			else
			{
				if (!q.empty() && qb && q.front() == x)
					q.pop();
				else
					qb = false;

				if (!s.empty() && sb && s.top() == x)
					s.pop();
				else
					sb = false;

				if (!pq.empty() && pqb && pq.top() == x)
					pq.pop();
				else
					pqb = false;
			}
		}

		if (pqb + qb + sb > 1)
			cout << "not sure" << endl;
		else if (pqb)
			cout << "priority queue" << endl;
		else if (sb)
			cout << "stack" << endl;
		else if (qb)
			cout << "queue" << endl;
		else
			cout << "impossible" << endl;
	}


	return 0;
}
