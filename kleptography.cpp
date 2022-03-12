#include <iostream>
using namespace std;


int main()
{
	int n,m; cin >> n >> m;

	string key, word; cin >> key >> word;

	key = string(m-n, ' ') + key;

	for(int i=m-1; i>n-1; i--)
	{
		int cur = (word[i] - key[i])%26;

		if(cur<0)
			key[i-n] = 'z' + cur + 1;
		else
			key[i-n] = 'a' + cur;
	}

	cout << key << endl;





	return 0;
}
