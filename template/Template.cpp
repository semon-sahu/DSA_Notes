// templet is a generlayzed formate of  programming that may be  a function or class 
// there are two type of template 
// 1.Funtion template
// 2.class templet

// <template t1> :content place holder
#include<iostream>
using namespace std;
template<typename t1>

t1 sum(t1 a,t1 b){
    return a+b;
}
template<typename x1,typename x2>
x1 myltiply(x1 x,x2 y){
    return x*y;
}
int main(){
    cout<<sum(5,6)<<endl;
    cout << myltiply(3, 2.3);
}