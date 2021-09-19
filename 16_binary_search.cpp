#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n;
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            e = mid-1;
        }
        else{
            s=mid+1;
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
    cout<<endl<<"After binary search operation : ";
    cout<<binarySearch(arr, n, key);
    cout<<endl;
    return 0;

}