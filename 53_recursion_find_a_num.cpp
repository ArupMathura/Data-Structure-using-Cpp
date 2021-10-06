#include<iostream>
using namespace std;

int firstoccurrence(int arr[], int n, int i, int key){
    if(i == n){
        return -1;
    }

    if(arr[i] == key){
        return i;   // here, i get the position of the variable
    }

    return firstoccurrence(arr, n, i+1, key);
}

int lastoccurrence(int arr[], int n, int i, int key){
    if(i == n){
        return -1;
    }

    int array = lastoccurrence(arr, n, i+1, key);
    if(array != -1){
        return array;
    }
    
    if(arr[i] == key){
        return i;   // here, i get the position of the variable
    }

    return -1;
}

int main()
{
    int i=0, n = 8, arr[] = {33, 55, 44, 77, 65, 45, 55, 25}, key = 55;
    // cout<<firstoccurrence(arr, n, i, key)<<endl;
    cout<<lastoccurrence(arr, n, i, key)<<endl;
    return 0;
}