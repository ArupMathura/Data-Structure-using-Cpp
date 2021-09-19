#include<iostream>
using namespace std;
int main()
{
    string bin_string = "011";
    long number = 0;
    number = stol(bin_string, 0, 2);
    cout<<number<<endl;
    return 0;
}