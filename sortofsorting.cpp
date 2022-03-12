#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool srt(const string& s1, const string& s2)
{
	return (s1.substr(0,2) < s2.substr(0,2));
}


int main()
{
	int n;



	while(cin >> n && n)
	{
		vector<string> v(n);

		for(auto &it : v)
			cin >> it;

		stable_sort(v.begin(), v.end(), ::srt);

		for(auto &it : v)
			cout << it << endl;

		cout << endl;
	}

	return 0;
}
