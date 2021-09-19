#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    int curr = 0;
    cout<<"After operation : ";
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            curr += a[j];
            cout<<curr<<endl;
        }
    }
    
    return 0;
}