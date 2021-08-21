#include <iostream>
using namespace std;


int main()
{
	int n; cin >> n;

	string bin1, bin2; cin >> bin1 >> bin2;

	if(!(n&1))
	{
		cout << (bin1 == bin2 ? "Deletion succeeded" : "Deletion failed") << endl;
		return 0;
	}
	else
	{
		for(int i=0; i<bin1.size(); i++)
		{
			if(bin1[i] == bin2[i])
			{
				cout << "Deletion failed" << endl;
				return 0;
			}
		}
	}

	cout << "Deletion succeeded" << endl;



	return 0;
}
