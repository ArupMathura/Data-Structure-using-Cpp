#include<iostream>
using namespace std;

bool sorted(int arr[], int n)
{
    if(n==1){
        return true;
    }
    bool restArray = sorted(arr+1, n-1);
    return (arr[0] < arr[1] && restArray);

}

int main()
{
    int arr[] = {2,3,55,7};
    cout<<sorted(arr, 4)<<endl;
    return 0;
}