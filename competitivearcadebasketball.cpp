#include <iostream>
#include <unordered_map>
using namespace std;



int main()
{
	int p, th, n;

	cin >> p >> th >> n;

	unordered_map<string, int> mp;

	string player;
	for(int i=0; i<p; i++)
	{
		cin >> player;
		mp[player] = 0;
	}


	bool flag = false;
	while(n--)
	{
		cin >> player >> p;

		if(mp[player] != -1)
			mp[player] += p;

		if(mp[player] >= th)
		{
			mp[player] = -1;
			flag = true;
			cout << player << " wins!" << endl;
		}
	}

	if(!flag)
		cout << "No winner!" << endl;


	return 0;
}
