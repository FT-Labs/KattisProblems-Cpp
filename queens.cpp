#include <iostream>
#include <unordered_set>
#define mp make_pair
using namespace std;

struct pair_hash {
    inline std::size_t operator()(const std::pair<int,int> & v) const {
        return v.first*31+v.second;
    }
};

int main()
{
	unordered_set<pair<int, int>, pair_hash> s;

	int t; cin >> t;

	int x, y;
	while(t--)
	{
		cin >> x >> y;
		s.insert(mp(x, y));

		for (int i=0; i<8; i++)
		{
			if ((i != x && i != y) && (s.count(mp(i, y)) || s.count(mp(x, i))))
			{
				cout << "INCORRECT" << endl;
				goto  end;
			}
		}

		int xtmp = x+1, ytmp = y+1;

		while (xtmp < 8 && ytmp < 8)
		{
			if (s.count(mp(xtmp, ytmp)))
			{
				cout << "INCORRECT" << endl;
				goto end;
			}
			xtmp++, ytmp++;
		}

		xtmp = x-1, ytmp = y-1;

		while (xtmp >= 0 && ytmp >= 0)
		{
			if (s.count(mp(xtmp, ytmp)))
			{
				cout << "INCORRECT" << endl;
				goto end;
			}

			xtmp--, ytmp--;
		}

		xtmp = x-1, ytmp = y+1;

		while(xtmp >= 0 && ytmp < 8)
		{
			if (s.count(mp(xtmp, ytmp)))
			{
				cout << "INCORRECT" << endl;
				goto end;
			}

			xtmp--, ytmp++;
		}

		xtmp = x+1, ytmp = y-1;


		while(xtmp < 0 && ytmp >= 0)
		{
			if (s.count(mp(xtmp, ytmp)))
			{
				cout << "INCORRECT" << endl;
				goto end;
			}

			ytmp--, xtmp++;
		}
	}

	cout << "CORRECT" << endl;


end:
	return 0;
}
