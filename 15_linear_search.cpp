#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int arr[n];
    cout<<endl<<"Enter the elements : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"] : ";
        cin>>arr[i];
    }
    int key;
    cout<<endl<<"Enter the element u want to found : ";
    cin>>key;
    cout<<endl<<"After linear search operation : ";
    cout<<linearSearch(arr, n, key);
    cout<<endl;
    return 0;

}