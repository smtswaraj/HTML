// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

// int binarytodasimal(int m)
// {
//     int ans = 0;
//     int x = 1;
//     while (m>0)
//     {
//         int y = m%10;
//         ans += x*y;
//         x *= 2 ;
//         m = m/10;

//     }

// int Octaltodasimal(int m)
// {
//     int ans = 0;
//     int x = 1;
//     while (m>0)
//     {
//         int y = m%10;
//         ans += x*y;
//         x *= 8 ;
//         m = m/10;

//     }
// int Hexadasimaltodasimal(string m)                 //how to convert haxadasimal number to Dasimal number System.
// {
//     int ans = 0;
//     int x = 1;
//     int s = m.size();
//     for (int i = s - 1; i >= 0; i--)
//     {
//         if (m[i] >= '0' && m[i] <= '9')
//         {
//             ans += x*(m[i] - '0');
//         }
//         else if (m[i] >= 'A' && m[i] <= 'F')
//         {
//             ans += x*(m[i] - 'A' + 10);
//         }
//         x *= 16;
//     }
//     return ans;
// }
// int dasimaltobinary(int n)
// {   
//     int ans = 0;
//     int x = 1;
//     while (x <= n)
//     {
//         x *= 2;
//     }
//     x = x/2;
    
//     while (x>0)
//     {
//         int lastdisit = n/x;
//         n -= lastdisit*x;
//         x /= 2;
//         ans = ans*10 + lastdisit; 
//     }
    
//   return ans;
// int Dasimaltooctal(int n)
// {   
//     int ans = 0;
//     int x = 1;
//     while (x <= n)
//     {
//         x *= 8;
//     }
//     x = x/8;
    
//     while (x>0)
//     {
//         int lastdisit = n/x;
//         n -= lastdisit*x;
//         x /= 8;
//         ans = ans*10 + lastdisit; 
//     }
    
//   return ans;
  
// }
string dasimaltoHaxadasimal(int n)
{
    string ans = "";
    int x  = 1;
    while(x <= n)
    {
        x *= 16; 
    }
    x /= 16; 
    while (x > 0 )
    {
       int lastdisit = n/x;
       n -= lastdisit*x;
       x /= 16;
       if (lastdisit<=9)
       {
           ans = ans + to_string(lastdisit);
       }
       else
       {
         char c = 'A' + lastdisit - 10;
         ans.push_back(c);   
       }
    }
    return ans;
}
int32_t main(int argc, char const *argv[])             
{
    int n;
    // int n;
    // cout << "Please enter a binary number" << endl;
    // cout << "Please enter a Octal number" << endl;
    cout << "Please enter a disimal number" << endl;
    // cout << "Please enter a Dasimal number :-" << endl;
    cin >> n;
    // cout << binarytodasimal(n);
    // cout << Hexadasimaltodasimal(n);
    // cout << dasimaltobinary(n);
    cout << dasimaltoHaxadasimal(n);
}
