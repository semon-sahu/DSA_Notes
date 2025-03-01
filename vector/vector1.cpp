

#include <iostream>

#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    vector<int> v; //{8,0,7,6,8};
                   //  cout<<"size of vector ="<<v.size()<<"\n";
                   //  cout<<"capacity of vector ="<<v.capacity();

    // push()
    //  pop()   they both are vector function.

    v.push_back(12);
    v.push_back(6);
    v.push_back(55);
    v.push_back(0);
    v.push_back(4);

    cout << "size of vector =" << v.size() << "\n";
    cout << "capacity of vector =" << v.capacity(); // vector capacity ko dugna kar deta hai agar 1 hai to 2 , 2 hai to 2 or 3 hai to 4, agar 4 hai to 4 , agar 5 hai to 8.
}