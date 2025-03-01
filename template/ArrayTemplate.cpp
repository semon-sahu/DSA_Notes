// Array template

#include <iostream>
using namespace std;
#include <array>
#include <algorithm>
int main()
{
    int a = 2;
    int b = 3;

    array<int, 6> arr{10, 32, 4, 3, 32, 7};
    sort(arr.begin(), arr.end());      // ye algorithm ke function hai.
    cout << "min = " << arr.front();   // ye array template ke function hai.
    cout << "\t max = " << arr.back(); // ye array template ke function hai.

    cout << "\n\n Size of array = " << arr.size() << "\n"; // ye array template ke function hai.

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "\n";

    cout << "first value of array = " << arr.front() << "\n";
    cout << "Last value of array = " << arr.back() << "\n";

    cout << *(arr.end() - 2); // second highest with help of pointer.

    cout << "\n";
    // int x=arr.size();

    int x = arr.back();
    int y = arr.size() - 2;
    // cout<<"\n "<<y;
    // cout<<"\n"<<x;

    for (int i = y; i >= 0; i--)
    {

        if (arr[i] < x)
        {

            cout << "last second value = " << arr[i];
            break;
        }
    }
}