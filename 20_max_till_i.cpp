// Apna collage c++ 8.4 array chalanges
// simple input:
//     1   0   5   4   6   8

// simple output:
//     1   1   5   5   6   8

#include<iostream>
using namespace std;

int main()
{
    int mx = -19999999;
    int n, a[n];
    cout<<"Enter the number of elements : ";
    cin>>n;
    cout<<"Enter elements : "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"After calculate : "<<endl;
    for(int i=0;i<n;i++)
    {
        mx = max(mx, a[i]);
        cout<<mx<<endl;
    }
    return 0;
}