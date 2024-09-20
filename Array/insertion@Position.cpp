#include <iostream>
using namespace std;

void insertElem(int arr[], int n, int elem, int pos)
{
    for (int i = n; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[pos] = elem;
}
int main()
{
    int arr[15] = {2, 4, 1, 8, 5};
    int n = 5;

    cout << "Before insertion of the elem : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "After insertion of elem : ";

    insertElem(arr, n, 10, 3);
    n++;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}