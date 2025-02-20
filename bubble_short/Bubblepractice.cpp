#include <iostream>
using namespace std;
void bubble(int a[], int s)
{
    int count = 0;
    for (int i = 0; i < s; i++)
    {
        bool t = true;
        for (int j = 0; j < s - i - 1; i++)
        {

            if (a[j] > a[j + 1])
            {

                count++;
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                t = false;
            }
        }
        if (t == true)
        {
            cout << "NO swap occour" << endl;
            break;
        }
    }
    cout << "Number of  swap:" << count << endl;

    for (int i = 0; i < s; i++)
    {
        cout << a[i] << "\t";
    }
}

int main()
{
    int arr[] = {56, 8, 2, 75, 691, 453, 25, 1};
    int s = sizeof(arr) / sizeof(arr[0]);
    bubble(arr, s);
    return 0;
}

#include <iostream>
using namespace std;

void bubble(int a[], int s)
{
    int count = 0;
    for (int i = 0; i < s; i++)
    {
        bool t = true;
        for (int j = 0; j < s - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                count++;
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                t = false;
            }
        }
        if (t)
        {
            cout << "No swap occurred" << endl;
            break;
        }
    }
    cout << "Number of swaps: " << count << endl;

    for (int i = 0; i < s; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl; // Add a newline after the array output
}

int main()
{
    int arr[] = {56, 8, 2, 75, 691, 453, 25, 1};
    int s = sizeof(arr) / sizeof(arr[0]);
    bubble(arr, s);
    return 0;
}
