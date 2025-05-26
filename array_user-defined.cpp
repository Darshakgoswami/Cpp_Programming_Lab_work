#include <iostream>
using namespace std;
int main() 
{
    int size;
    cout << "Enter array size: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) 
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Number is : \n";
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << "\n";
    }
   return 0;
}