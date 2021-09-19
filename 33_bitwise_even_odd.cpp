#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if (!(a & 1))
        cout<<"even"<<endl;
    else
        cout<<"odd"<<endl;
    return 0;
}