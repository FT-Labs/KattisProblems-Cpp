/*
Author: Arda
Company: PhysTech
Date: 9/26/20
*/
#include  <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Bank{
    int deadLine;
    int profit;
};

bool comparison(Bank a,Bank b)
{
    return (a.profit>b.profit);
}

int bankSchedule(vector<Bank> vec,int n)
{
    sort(vec.begin(),vec.end(),comparison);
    int sum=0;

    bool slot[n];

    for(int i=0;i<n;++i)
        slot[i] = false;

    for(int i=0;i<n;++i)
    {
        for(int j=min(n,vec[i].deadLine);j>=0;--j)
        {
            if(!slot[j])
            {
                sum += vec[i].profit;
                slot[j] = true;
                break;
            }
        }
    }
    return sum;

}

int main() {
    vector<Bank> vec;

    int n,t;
    cin >> n >> t;

    Bank max;
    max.profit = 0;
    max.deadLine = t;
    vec.push_back(max);

    int sum=0;
    int x,y;
    for(int i=0;i<n;++i)
    {
        cin >> x >> y;
        max.profit = x;
        max.deadLine = y;
        vec.push_back(max);
    }

    sum += bankSchedule(vec,n+1);
    cout << sum << endl;
    return 0;
}
