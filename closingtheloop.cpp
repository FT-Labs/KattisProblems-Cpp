#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{

	int t; cin >> t;

	for(int i=0; i<t; i++)
	{
		vector<int> blue, red;
		make_heap(blue.begin(), blue.end());
		make_heap(red.begin(), red.end());
		int n; cin >> n;

		while(n--)
		{
			string s; cin >> s;
			char ch = s.back();
			int cnt = stoi(s.substr(0, s.size()-1));

			if(ch == 'R')
			{
				red.push_back(cnt);
				push_heap(red.begin(), red.end());
			}
			else
			{
				blue.push_back(cnt);
				push_heap(blue.begin(), blue.end());
			}
		}

		int tot = 0;

		while(!blue.empty() && !red.empty())
		{
			int b = blue.front(), r = red.front();
			pop_heap(blue.begin(), blue.end()); blue.pop_back();
			pop_heap(red.begin(), red.end()); red.pop_back();
			tot += b+r-2;
		}

		cout << "Case #"<< i+1 << ": " << tot << endl;
	}

	return 0;
}
