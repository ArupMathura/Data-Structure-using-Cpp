#include<iostream>
using namespace std;


// *****
// ****
// ***
// **
// *


// int main(){
//     int i, j, rows;
//     cin>>rows;

//     for(i=rows;i>=1;i--){
//         for(j=i;j>=1;j--){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }



//     *
//    **
//   ***
//  ****
// *****


// int main(){
//     int i, j, n;
//     cin>>n;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n;j++){
//             if(j<=n-i){
//                 cout<<" ";
//             }
//             else{
//                 cout<<"*";
//             }
//         }
//         cout<<"\n";
//     }
//     return 0;
// }



// 1
// 22
// 333
// 4444
// 55555


// int main(){
//     int i, j, n;
//     cin>>n;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             cout<<i;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }


int main()
{
    int i, j, n, count = 1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<count++<<" ";
        }
        cout<<endl;
    }
    return 0;
}