
#include<bits/stdc++.h>
using namespace std;

void printNum(int n)
{
    if (n==0){
        return;
    }
    cout<<n<<endl;
    printNum(n-1);
    cout<<"After recursion and adding 2 : "<<endl;
    cout<<n+2<<endl;
    return;
}

int main()
{
    int n;
    cin>>n;
    printNum(n);
    return 0;
}