#include <iostream>
using namespace std;

int main()
{
	int t; cin >> t;
	cin.ignore();

	while (t--)
	{
		string n1 = "", n2 = "";

		char ch;

		while (cin.peek() != '\n' && cin >> ch)
		{
			if (ch != ' ')
				n1 += ch;
		}
		cin.ignore();


		while (cin.peek() != '\n' && cin >> ch)
		{
			if (ch != ' ')
				n2 += ch;
		}
		cin.ignore();


		string ans = to_string(stoi(n1) + stoi(n2));

		for (int i=0; i<ans.size(); i++)
		{
			cout << ans[i];

			if (i < ans.size()-1)
				cout << ' ';
		}
		cout << endl;
	}


	return 0;
}
