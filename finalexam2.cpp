#include <iostream>
using namespace std;

int main()
{
	int n; cin >>n;

	char cur;
	int tot = 0;

	for(int i=0;i<n;i++)
	{
		char tmp; cin >> tmp;

		if(tmp == cur)
			tot++;

		cur = tmp;
	}

	cout << tot << endl;


	return 0;
}
