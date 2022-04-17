#include <iostream>
#include <limits.h>   //  i update this.
using namespace std;
int main()
{
    int n;
    int mx = INT_MIN;   //  so i update this.
    int count = 0;
    cout << "Enter your array size :- ";
    cin >> n;
    int array[n];
    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"enter a number for  "<<i << " index :- ";
        cin >> array[i];
    }
    
        for (int i = 0; i < n; i++)
        {
            if (array[i] > mx && array[i] > array[i + 1])
            {
                count++;
                // mx = array[i];     i update this think.
            }
                // mx = array[i];     i update this think.
                
            mx = max(mx,array[i]);
        }
    
    cout<<"racod braking day :- " << count;
    return 0;
}