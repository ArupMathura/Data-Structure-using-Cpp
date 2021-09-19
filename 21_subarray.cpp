#include<iostream>
using namespace std;

void subArrays(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout << arr[k] << "  ";
            }
            cout << endl;
        }
    }
}

int main()
{
    int arr[]={1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<< "All non-empty subarrays : "<<endl;
    subArrays(arr, n);
    return 0;
}