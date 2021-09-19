// brute force approach
// time complexity : O(n^3)

#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int arr[n], i;
    cout<<"Enter the elements : ";
    for(i=0;i<n;i++)
        cin>>arr[i];
    int sum=0;
    int maxSum=INT_MIN;
    for(i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            sum=0;
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<"  ";
                sum += arr[k];
            }
            cout<<" = "<<sum;
            cout<<endl;
            maxSum = max(maxSum, sum);
        }
    }
    cout<<maxSum<<endl;
    return 0;
}