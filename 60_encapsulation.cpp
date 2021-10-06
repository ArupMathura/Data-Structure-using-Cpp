#include<iostream>
using namespace std;
class A{
    public:
        int a;
        void funcA(){
            cout<<"function A"<<endl;
        }
    private:
        int b;
        void funcB(){
            cout<<"function B"<<endl;
        }
    protected:
        int c;
        void funcC(){
            cout<<"function C"<<endl;
        }
};

int main(){
    A obj;
    obj.funcA();
    // here we can't access private and protected data member & member function
    // we need setter and getter function
    return 0;
}