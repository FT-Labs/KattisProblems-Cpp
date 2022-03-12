#include <iostream>
#include <vector>
using namespace std;


int main()
{
	bool alphabet[26]{false};
	string tmp; cin >> tmp;
	char firstLast = tmp.back();
	vector<string> animals;

	int n; cin >> n;

	string s;
	while(n--)
	{
		cin >> s;

		alphabet[s.front()-'a'] = true;
		if(s[0] == firstLast)
		{
			animals.push_back(s);
		}
	}

	bool flag = false;
	if(animals.empty())
	{
		cout << '?' << endl;
		flag = true;
	}
	else if(animals.size() == 1)
	{
		if (firstLast == animals[0].back())
		{
			cout << animals[0] << '!' << endl;
			flag = true;
		}
	}
	else
	{
		for(auto it : animals)
		{
			char cur = it.back();


			if(!alphabet[cur-'a'])
			{
				cout << it << '!' << endl;
				flag = true;
				break;
			}
		}
	}

	if(!flag)
		cout << animals[0] << endl;

	return 0;
}
