// #.pair is use to store two values of different data types

// .the first value is access by the first key word
//     .the second value is access by the second key word
//     .we can instert data in a pair by using make_pair function
//     .we can also use the assignment operator to assign values to a pair

// #include<iostream>
// using namespace std;
// #include <vector>
// int main(){
//     pair<int ,int>p1{101,21};
//     p1=make_pair(102,"22");//we can also use the assignment operator to assign values to a pair
//     cout<<"rno="<<p1.first<<"\t";
//     cout<<"age="<<p1.second<<"\t";
// }



#include<iostream>
using namespace std;
#include <vector>
int main(){
    vector<pair<int,string>>v;
    int roll,n;
    string name;
    cout<<"Enter the number of students:  \n ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout << "Enter the roll number:  \n  ";
        cin>>roll;
        cout << "Enter the name:  \n ";
        cin>>name;
        v.push_back({roll,name});
    }
    cout<<"result are \n";
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<":"<<v[i].second<<"\n";
    }
}



//another way to do the same thing

#include <iostream>
using namespace std;
#include <vector>
#include <tuple>

int main(){
    tuple<int,string,int>student{101,"sumit",21};
    cout<<"roll no="<<get<0>(student)<<"\n";
    cout<<"name="<<get<1>(student)<<"\n";
    cout<<"age="<<get<2>(student)<<"\n";
}