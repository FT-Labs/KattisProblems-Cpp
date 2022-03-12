#include <iostream>

int main()
{
	int t; std::cin >> t;

	int counter = 0;
	int cur = 0;
	for(int i=0;i<t;i++)
	{
		int tmp; std::cin >> tmp;

		if (i%2 == 0)
			cur = tmp;
		else
			counter += tmp-cur;
	}

	std::cout << (t%2==0 ? std::to_string(counter) : "still running" )<< std::endl;

	return 0;
}
