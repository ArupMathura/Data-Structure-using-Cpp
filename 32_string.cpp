#include <bits/stdc++.h>
#include <string>
using namespace std;
/*
Given a string of integers, our task is to form the biggest number out of those
numbers in the string.
Approach:
Sort the string in descending order using inbuilt sort function.
*/
int main()
{
    string s = "142536987";
    sort(s.begin(), s.end(), greater<int>());
    cout<<s<<endl;
}



// int main()
// {
//     string s = "lkjhgfdsazxc";
//     sort(s.begin(), s.end());
//     cout<<s;
// }


// int main()
// {
//     int x = 786;
//     cout<<to_string(x)<<"2";
// }


// int main()
// {
//     string s = "786";
//     int x = stoi(s);
//     cout<<x + 2<<endl;
// }


// int main()
// {
//     string s = "ABCDEFGHIJKL";
//     s = s.substr(6,4);
//     cout<<s<<endl;
// }



// int main()
// {
//     string text = "ABCDEFGH";

//     cout << "Initial string: " << text << endl;

//     // text.erase(4, string::npos);
//     text.erase(3, 3);
//     cout << "Final string: " << text;
// }

// int main()
// {
//     string s1="abc";
//     string s2="xyz";
//     if (!s1.compare(s2))
//     {
//         cout<<"same";
//     }
//     else{
//         cout<<"not same";
//     }
//     return 0;
// }