/*
Author: Arda
Company: PhysTech
Date: 9/26/20
*/
#include  <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void swap(int *xp,int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(vector<int> arr, int n)
{
    for(int i=0;i<n-1;++i)
    {
        for(int j=0;j<n-i-1;++j)
        {
            if (arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                for(int k=0;k<n;++k)
                    cout << arr[k] << ' ';
                cout << endl;
            }

        }
    }
}

int main() {
    int n;
    vector<int> vec;
    for(int i=0;i<5;++i)
    {
        cin>>n;
        vec.push_back(n);

    }

    n = sizeof(vec)/sizeof(vec[0]);
    bubbleSort(vec,n-1);
    return 0;


}
