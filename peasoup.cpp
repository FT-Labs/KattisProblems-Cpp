/*
Author: Arda
Company: PhysTech
Date: 10/1/20
*/
#include  <iostream>
using namespace std;
#define endl '\n'

int main() {

    int n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    bool found = false;
    for(int i=0;i<n;++i)
    {
        string restaurant,s;
        int m;
        cin >> m;
        cin.ignore();
        bool rest = false;
        bool cond[2] = {false, false};
        for(int j=0;j<=m;++j)
        {
            if(!rest)
            {
                getline(cin,restaurant);
                rest = true;
                continue;
            }


            getline(cin,s);
            if(s == "pea soup")
                cond[0] = true;
            else if(s == "pancakes")
                cond[1] = true;
        }
        if(cond[0] && cond[1])
        {
            cout << restaurant << endl << flush;
            found = true;
            break;
        }
    }

    if(!found)
        cout << "Anywhere is fine I guess" << endl << flush;

    return 0;
}