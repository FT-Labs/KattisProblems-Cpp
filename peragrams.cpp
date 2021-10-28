#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int arr[26]{0};

	string s; cin >> s;

	for(auto ch : s)
		arr[ch-'a']++;

	bool flag = false;

	int tot = 0;

	for (int i=0; i<26; i++)
	{
		if (arr[i]%2 != 0)
		{
			if (!flag)
			{
				flag = true;
			}
			else
				tot++;
		}
	}

	if (arr[s[0] - 'a'] == s.size())
		cout << 0 << endl;
	else
		cout << tot << endl;

	return 0;
}
