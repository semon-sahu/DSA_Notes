
//unorder-map:-
//unorder map does not support complex data type
//because complex data type is doesn't support its own hashing function 
//insertion tyme complexstit orderof one
//

#include<iostream>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map<int,string>up;
    up.insert({10,"anu"});
    up.insert({20,"sai"});
    up.insert({30,"ram"});
 for (auto  p:up){
    cout<<p.first<<" "<<p.second<<"\n";
 }
}


//multi-map :
//multi-map is a container which stores elements of different data types
//dublicate key ko use karna hai toh multi-map ka use hoga 
//insertion time complexity O(1)
//deletion time complexity O(1)
//search time complexity O(1)
//multi-map is a container which stores elements of different data types

#include <iostream>
#include <map>
using namespace std;
int main()
{
    multimap<int, string> mp;
    mp.insert({10, "anu"});
    mp.insert({101, "sunny"});
    mp.insert({20, "sai"});
    mp.insert({30, "sai"});
    for (auto p : mp)
    {
        cout << p.first << " " << p.second << "\n";
    }
    auto t=mp.find(10);
    if(t!=mp.end()){
        mp.erase(t);
    }
    else{
        cout<<"key not found";
    }
    mp.erase(10);
    for(auto p:mp){
        cout<<p.first<<" "<<p.second<<"\n";
    }
}