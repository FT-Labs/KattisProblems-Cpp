#include <unordered_set>
#include <iostream>
using namespace std;


int main()
{
	int m, n; cin >> m >> n;

	unordered_set<string> uset;

	cin.ignore();
	for (int i=0; i<m; i++)
	{
		string s; getline(cin, s);
		uset.insert(s);
	}

	cout << (uset.size() >= 8 ? "satisfactory" : "unsatisfactory") << endl;


	return 0;
}
