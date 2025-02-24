//Class template tilteral 

// #include<iostream>
// using namespace std;
// template<typename v1>
// class cybrom{

//     v1  a;
//     public :cybrom(v1 x){
//         a=x;
//   }
//         v1 show(){
//             return a+1;

//         }
// };

// int main(){
//     cybrom<int> obj(10.20);
//     cout<<obj.show()<<endl;
// }


//another program
#include <iostream>
using namespace std;
template <typename  x1,typename x2>
class  bhopal{
    public:void sum(x1 t1, x2 t2){
        cout<<t1+t2;
    }
};
int main(){
    bhopal<int,float> obj1;
    obj1.sum(10,20.5);
}