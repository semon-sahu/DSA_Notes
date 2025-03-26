//order_set

// #include<iostream>
// using namespace std;
// #include<set>
// int main(){
//     set<int>s{20,40,5,2,67,1};
//     for(auto  p:s){
//         cout<<p<<" \t";

//     }

//     s.insert(7);
//     cout<<"\n";
//     for(auto p:s){
//         cout<<p<<" \t";
//     }
//     s.erase(20);
//     cout<<"\n";
//    auto t=s.find(67);
//    if(t!=s.end()){
//     cout<<"found="<<*t;

//    }

//    else{
//     cout<<"not found";
//    }
// }


//unorder set
#include <iostream>
using namespace std;
#include <unordered_set>
int main()
{
    unordered_set<int> s{20, 40, 5, 2, 67, 1};

    for (auto p : s)
    {
        cout << p << " \t";
    }

    s.insert(7);
    cout << "\n";
    for (auto p : s)
    {
        cout << p << " \t";
    }
    s.erase(20);
    cout << "\n";
    auto t = s.find(67);
    if (t != s.end())
    {
        cout << "found=" << *t;
    }

    else
    {
        cout << "not found";
    }
}


// wap to find out the given string the penagram or not 