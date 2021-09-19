#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n)
{
    return (n && !(n & n-1));
}


// bool isPowerOfTwo(int n)
// {
//     if (n==0)
//         return 0;
//     while (n!=1)
//     {
//         if (n % 2 != 0)
//             return 0;
//         n = n / 2;
//     }
//     return 1;
// }
int main()
{
    isPowerOfTwo(16) ? cout<<"yes\n" : cout<<"no\n";
    // isPowerOfTwo(64) ? cout<<"yes\n" : cout<<"no\n";
    return 0;
}