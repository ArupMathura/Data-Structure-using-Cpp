#include <iostream>
using namespace std;
// int main()
// {
//     // Pointer to an integer
//     int *p;

//     // Pointer to an array of 5 integers
//     int(*ptr)[5];
//     int arr[5]={10, 20, 30, 40, 50};

//     // Points to 0th element of the arr.
//     p = arr;

//     // Points to the whole array arr.
//     ptr = &arr;

//     cout << "p =" << p << ", ptr = " << ptr << endl;
//     p++;
//     ptr++;
//     cout << "p =" << p << ", ptr = " << ptr << endl;

//     return 0;
// }

int main()
{
    int arr[] = {3, 5, 6, 7, 9};
    int *p = arr;
    int(*ptr)[5] = &arr;

    cout << "p = " << p << ", ptr = " << ptr << endl;
    cout << "*p = " << *p << ", *ptr = " << *ptr << endl;

    cout << "sizeof(p) = " << sizeof(p) << ", sizeof(*p) = " << sizeof(*p) << endl;
    cout << "sizeof(ptr) = " << sizeof(ptr) << ", sizeof(*ptr) = " << sizeof(*ptr) << endl;
    return 0;
}