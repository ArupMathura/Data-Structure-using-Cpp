// ****
// *  *
// *  *
// *  *
// ****

#include<iostream>
using namespace std;

int main()
{
    int i, j, rows, cols;
    cin>>rows>>cols;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            if(i==0 or i==rows-1 or j==0 or j==cols-1)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}