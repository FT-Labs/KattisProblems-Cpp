#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

#define mp make_pair

bool sortBySec(const pair<string, int> &a, const pair<string, int> &b)
{
    return (a.first < b.first);
}


int main()
{

    int n;
    int l = 1;

    while(cin >> n && n)
    {
        map<string, int> animalMap;
        cin.ignore();


        for(int i=0; i<n; i++)
        {
            string s;
            getline(cin , s);
            transform(s.begin(), s.end(), s.begin(), ::tolower);

            auto last = s.find_last_of(' ');

            if(last != string::npos)
            {
                string animal = s.substr(last+1);

                    animalMap[animal]++;
            }
            else
                animalMap[s]++;
        }

        cout << "List " << l << ':' << endl;
        for(auto it : animalMap)
        {
            cout << it.first << " | " << it.second << endl;
        }
        l++;
    }



    return 0;
}
