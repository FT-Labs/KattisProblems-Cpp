#include <iostream>
using namespace std;


int main()
{
	int n; cin >> n;

	for(int i=0;i<n;i++)
	{
		string s; cin >> s;
		string left,right;
		bool flag = false;

		if(s == "P=NP")
			cout << "skipped" << endl;
		else
		{
			for(auto i : s)
			{
				if(i == '+')
					flag = true;
				else if(!flag)
					left += i;
				else if(flag)
					right += i;
			}
			cout << stoi(left)+stoi(right) << endl;
		}
	}


	return 0;
}
