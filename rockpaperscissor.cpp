/*
Author: Arda
Company: PhysTech
Date: 9/27/20
*/
#include  <iostream>
#include <vector>
using namespace std;


int RockPaperScissors(string p1,string p2)
{
    if(p1=="rock" && p2=="scissors")
        return 1;
    else if(p1=="scissors" && p2 == "rock")
        return 2;
    else if(p1=="rock" && p2=="paper")
        return 2;
    else if(p1=="paper" && p2=="rock")
        return 1;
    else if(p1=="scissors" && p2=="paper")
        return 1;
    else if(p1=="paper" && p2=="scissors")
        return 2;
    else
        return 0;
}


int main() {

    int n,k;

    while(cin >> n && cin >> k)
    {
        vector<int> wins(n,0);
        vector<int> loss(n,0);

        int  m = k * n * (n-1) / 2;

        for(int i=0;i<m;++i)
        {
            int p1,p2;
            string p1s,p2s;
            cin >> p1 >> p1s >> p2 >> p2s;
            --p1;
            --p2;
            int res = RockPaperScissors(p1s,p2s);
            if(res == 1) {
                wins[p1]++;
                loss[p2]++;

            }
            else if(res == 2)
            {
                wins[p2]++;
                loss[p1]++;
            }

        }

        for(int j=0;j<n;++j)
        {
                double winRate = (double)wins[j]/(wins[j]+loss[j]);
                if(winRate == 0)
                    cout << "0.000" << endl;
                else if(winRate == 1 || (wins[j]>=1 && loss[j] == 0))
                    cout << "1.000" << endl;
                else if(wins[j] == 0 && loss[j] == 0)
                    cout << "-" << endl;
                else
                {
                    cout.precision(3);
                    cout << fixed;
                    cout << winRate << endl;
                }
            }

        }
        cout << endl;

    return 0;
}