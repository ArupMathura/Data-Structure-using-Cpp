#include<iostream>
using namespace std;
class student{
    public:
        string name;
        int age;
        bool gender;

        student(string s, int a, bool g){
            name = s;
            age = a;
            gender = g;
        }

        void printInfo(){
            cout<<"Display the printInfo : "<<endl;
            cout<<"Name : ";
            cout<<name<<endl;
            cout<<"Age : ";
            cout<<age<<endl;
            cout<<"Gender : ";
            cout<<gender<<endl;
        }
    
};

int main(){
    student s("arup", 22, 1);
    cout<<s.age;
}