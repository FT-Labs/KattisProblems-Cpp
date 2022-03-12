#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main()
{
	map<string, int> students;
	int mx;

	string s;
	getline(cin, s);

	while(s != "***")
	{
		students[s]++;
		getline(cin, s);
	}

	std::map<string,int>::iterator best
        = std::max_element(students.begin(),students.end(),[] (const std::pair<string,int>& a, const std::pair<string,int>& b)->bool{ return a.second < b.second; } );
	mx = best->second;
	students[best->first]  = 0;
	std::map<string,int>::iterator best2
        = std::max_element(students.begin(),students.end(),[] (const std::pair<string,int>& a, const std::pair<string,int>& b)->bool{ return a.second < b.second; } );

	if(mx > best2->second)
		cout << best->first << endl;
	else
		cout << "Runoff!" << endl;

	return 0;
}
