#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	while(cin >> n)
	{
		vector<int> v;
		vector<int> res;
		int m;
		for(int i=0;i<n;++i)
		{
			cin >> m;
			v.push_back(m);
		}

		if(v.size() == 1)
		{
			if(v[0] != 1)
				cout << "Not jolly" << endl << flush;
			else
				cout << "Jolly" << endl << flush;
			continue;
		}
		bool isTrue = false;

		for(int i=0;i<v.size()-1;++i)
		{
			res.push_back(abs(v[i]-v[i+1]));
		}
		sort(res.begin(),res.end());

		if(res[0]==1)
		{
				for(int i=0;i<res.size()-1;++i)
				{
					if(res[i]+1!=res[i+1])
					{
						cout << "Not jolly" << endl << flush;
						isTrue = true;
						break;

					}
				}
		}else{
			cout << "Not jolly" << endl << flush;
			isTrue = true;
		}
		if(!isTrue)
			cout << "Jolly" << endl << flush;
	}
	return 0;
}
