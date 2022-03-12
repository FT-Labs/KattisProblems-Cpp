#include <algorithm>
#include <iostream>
using namespace std;


int arr[100];
int maxV = 1;

//Another way to solve
void solve(string s, int size)
{
	if(size <= 0)
		return;

	solve(s, size-1);
	arr[size] = 1;
	for(int i=0; i<size; i++)
	{
		if(s[i] < s[size])
		{
			arr[size] = max(arr[size], arr[i]+1);
			maxV = max(maxV, arr[size]);
		}
	}
}


int main()
{
	string s; cin >> s;

	int length[s.size()];


	int mx = 1;
	for(int k=0; k<s.size(); k++)
	{
		length[k] = 1;
		for(int i=0; i<k; i++)
		{
			if(s[i] < s[k])
			{
				length[k] = max(length[k], length[i]+1);
				mx = max(mx, length[k]);
			}
		}
	}

	solve(s, s.size());


	cout << 26-mx << endl;



	return 0;
}
