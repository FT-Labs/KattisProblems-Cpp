#include <iostream>
#include <iomanip>
using namespace std;


const string wel = "welcome to code jam";


int perm(int a, int b, string s)
{
	if(b == wel.size())
		return 1;
	else if(a == s.size())
		return 0;
	int tot = perm(a+1, b, s);

	if(s[a] == wel[b])
		tot += perm(a+1, b+1, s)%10000;


	return tot;
}


int main()
{
	int n; cin >> n;
	cin.ignore();
	string s;
	int start = 1;

	while(n--)
	{
		getline(cin, s);

		cout << "Case #" << start++ << ": " << setfill('0') << setw(4) << perm(0, 0, s) << endl;

	}


	return 0;
}
