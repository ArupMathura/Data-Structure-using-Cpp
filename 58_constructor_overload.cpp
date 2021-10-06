#include<iostream>
using namespace std;

class constructor{
    public:
    float area;
    constructor(){
        area = 0;
    }
    constructor(float a, float b){
        area = a * b;
    }

};

int main(){
    constructor c;
    constructor c1(10, 20);
    cout<<c.area<<" default constructor"<<endl;
    cout<<c1.area<<" parameterized constructor"<<endl;
    return 0;
}