#include <iostream>
using namespace std;


int main()
{
	string crypted, key;
	cin >> crypted >> key;


	for (int i=0; i<crypted.size(); i++)
	{
		int idx = i % key.size();

		int cur = (crypted[i] - key[idx] + 26) % 26;
		crypted[i] = 'A' + cur;
		key[idx] =  crypted[i];
	}

	cout << crypted << endl;



	return 0;
}
