#include<iostream>
using namespace std;

int main()
{
    int n, arr[20];
    cout<<"Enter the number of elements : ";
    cin>>n;
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=1;i<n;i++)
    {
        int current = arr[i];
        int j = i-1;
        while (arr[j]>current)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
        
    }

    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}