#include <iostream>
using namespace std;
int n;
int j = 2;
int ans = 2;
int current = 2;
int main(int argc, char const *argv[])
{
    cout << "Please enter your array size : ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout <<"Enter a number for ", cout << i, cout << " index  : ";
        cin >> a[i];
    }
    int pd = a[1] - a[0];
    while (j < n)
    {
        if (pd == a[j] - a[j - 1])
        {
            current++;
        }
        else
        {
            pd = a[j] - a[j - 1];
            current = 2;
        }
        ans = max(ans, current);
        j++;
    }
    cout << "Maximom arithamatic sub array is :" << ans;
    return 0;
}
