#include <iostream>
using namespace std;


int solve(int n, int m)
{
	int A[n+1];
	A[0] = 1;
	A[1] = 0;
	int B[n+1];
	B[0] = 0;
	B[1] = 1;

	for(int i=2; i<=n; i++)
	{
		A[i] = A[i-2] + 2*B[i-1];
		B[i] = A[i-1] + B[i-2];
	}


	return A[n];
}


int main()
{
	int n;

	while(cin >> n && n != -1)
	{
		cout << solve(n, 2) << endl;
	}


	return 0;
}
