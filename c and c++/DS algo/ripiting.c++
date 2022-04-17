// #include <bits/stdc++.h>
#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int n;
    int minindex = INT_MAX;
    cout<<"please enter your array size :-  ";
    cin>> n;
    int a[n];
    for(int i = 0; i<n; i++)
    {
        cout<<"enter your " << i <<" index value :- ";
        cin >> a[i];
    }
   const int N = 1000;
    int idx[N];
    for(int i = 0; i<N; i++)
    {
        idx[i] = -1;
    }  
    // cout<<"chake";
    for(int i = 0; i<n; i++)
    {
        if(idx[a[i]] != -1)
        {
            minindex = min(minindex,idx[a[i]]);
        }
        else
        {
            idx[a[i]] = i;
        }
    }
    if (minindex == INT_MAX)
    {
        cout<<"-1"<<endl;
       
    }
    else
    {
        cout<<minindex<<endl;
        // cout<<a[minindex]<<endl;  // this is my new update. this print value of this index.
       
    }

   return 0;
}