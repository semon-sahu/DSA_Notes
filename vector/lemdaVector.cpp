#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
bool cybrom(int a,int b){
    return a>b;

}
int main(){
    vector<int>v{2,1,3,5};
    sort (v.begin(),v.end());
    for(auto p:v){
        cout<<p<<"\n";

    }
    cout<<[](int a,int b){return a>b;}(4,20);
    cout<<"\n";
    sort(v.begin(),v.end(),less<int>());
    sort(v.begin(),v.end(),greater<int>());
    sort(v.begin(),v.end(),[](int a,int b){return a>b;});
    for(auto  p:v){
   cout<<p<<"\t";
    }
}



// all_of();,nonne_of();,any_pf() these function  return boolean value always
