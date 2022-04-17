#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int i = 0;
    int n;
    int mx = INT_MIN;
    cout<<"Enter your array size :"<<endl;
    cin>>n;
    int arr[n];
    while(i<n)
    {
        cin>>arr[i];
        i++;
    }
    i = 0;
    
    while(i<n)
    {
        mx = max(mx,arr[i]);
        i++;
        
    //  cout<<"  "<<mx;    //if you active this you understand how this work.
    }
     cout<<"Maximom is :  "<<mx; //this show only the naximom number of the n size of given array.
     return 0;
}