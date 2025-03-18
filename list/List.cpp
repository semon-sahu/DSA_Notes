//double link list
#include<iostream>
using namespace std;
#include<list>
#include<algorithm>
int main(){
    list<int>l1;
    l1.push_front(10);
    l1.push_front(5);
    l1.push_front(40);
    l1.push_back(50);
    for(auto p:l1){
        cout<<"\t";

    }
   /* l1.pop_front();
    l1.pop_back();
    cout<<"\n after del \n";
    for(auto p:l1){
        cout<<p<<"\t";
    }
    auto t=l1.begin();
    advance (t,2);
    l1.insert(t,1000);
    cout<<"\n after ins \n";
    cout<<"\n";
    for(auto p:l1){
        cout<<p<<"\t";
    }
    auto t1=l1.begin();
    advance (t1,3);
    l1.erase(t1);
    cout<<"\n after erase \n";
    for(auto p:l1){
        cout<<p<<"\t";

    }
    auto t3=l1.begin();
    advance (t3,1);
    *t3=900;
    cout<<"\n after change \n";
    for(auto p:l1){
        cout<<p<<"\t";
    }*/
    auto g=find(l1.begin(),l1.end(),5);
    if(g!=l1.end()){
        cout<<"found="<<*g;

    }
    else{
        cout<<"not found";
    }

}