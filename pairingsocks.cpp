#include <iostream>
#include <queue>
using namespace std;



int main()
{
	deque<int> so, sa;

	int n; cin >> n;

	int cur;

	for (int i=0; i<2*n; i++)
	{
		cin >> cur;
		so.push_front(cur);
	}

	int p = 0;

	while (!so.empty())
	{
		p++;

		if (sa.empty())
		{
			sa.push_front(so.front());
			so.pop_front();
			continue;
		}

		if (!sa.empty() && sa.front() == so.front())
		{
			sa.pop_front();
			so.pop_front();
			continue;
		}

		sa.push_front(so.front());
		so.pop_front();
	}

	if (sa.empty())
		cout << p << endl;
	else
		cout << "impossible" << endl;





	return 0;
}
