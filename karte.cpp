#include <unordered_map>
#include <set>
#include <iostream>
using namespace std;


int main()
{
	set<int> P;
	set<int> K;
	set<int> H;
	set<int> T;

	string s; cin >> s;

	for(int i=0; i<s.size(); i+=3)
	{
		char cur = s[i];
		int num;

		if(s[i+1] == '0')
			num = s[i+2]-'A';
		else
			num = stoi(s.substr(i+1, 2));

		switch(cur)
		{
			case 'P':
				if(P.count(num))
				{
					cout << "GRESKA" << endl;
					return 0;
				}
				else
					P.insert(num);
				break;
			case 'T':
				if(T.count(num))
				{
					cout << "GRESKA" << endl;
					return 0;
				}
				else
					T.insert(num);
				break;
			case 'H':
				if(H.count(num))
				{
					cout << "GRESKA" << endl;
					return 0;
				}
				else
					H.insert(num);
				break;
			case 'K':
				if(K.count(num))
				{
					cout << "GRESKA" << endl;
					return 0;
				}
				else
					K.insert(num);
				break;
		}
	}

	cout << 13-P.size() << ' ' << 13-K.size() << ' ' << 13-H.size() << ' ' << 13-T.size() << endl;

	return 0;
}
