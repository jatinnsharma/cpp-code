#include <iostream>
using namespace std;

int main()
{
    int arr[10], size, pos, num;
    cout << "Enter size of array : ";
    cin >> size;
    // input
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter data you want to insert : ";
    cin >> num;
    cout << "Enter Position : ";
    cin >> pos;

    // code for insert at specfic position
    if (pos <= 0 || pos >= size + 1)
    {
        cout << "Invalid Position";
    }
    else
    {
        for (int i = size - 1; i >= pos - 1; --i)
        {
            arr[i + 1] = arr[i];
        }
        arr[pos - 1] = num;
        size++;
    }
    // Printing 
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}