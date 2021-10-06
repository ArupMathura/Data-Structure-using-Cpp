#include<iostream>
using namespace std;

int main(){
    int i, j, rows, cols;
    cin>>rows>>cols;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}