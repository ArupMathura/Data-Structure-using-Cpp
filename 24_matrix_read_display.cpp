#include<iostream>
using namespace std;
int main()
{
    int i, j, r, c;
    cout<<"Enter the number of rows : ";
    cin>>r;
    cout<<"Enter the number of cols : ";
    cin>>c;
    int mat[r][c];
    cout<<"Enter the elements of the matrix : ";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>mat[i][j];
        }
    }
    cout<<"The elements of the matrix are : "<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}