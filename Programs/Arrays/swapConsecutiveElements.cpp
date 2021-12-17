#include <iostream>
using namespace std;

void getAnArray(int arr[], int size);
void swapConsecutiveElements(int arr[], int size);

int main()
{
    int n;
    cout << endl;
    cout << "How much size you wanna define of an array? " << endl;
    cout << endl;
    cin >> n;
    cout << endl;

    int arr[100];

    getAnArray(arr, n);

    swapConsecutiveElements(arr, n);

    cout << endl;
    cout << "Swapped array is ....." << endl;
    cout << endl;

    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }

    cout << endl;
}

void getAnArray(int arr[], int size)
{
    cout << endl;
    cout << "Please start inputting the values of the array." << endl;
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void swapConsecutiveElements(int arr[], int size)
{
    int c1 = 0;
    int c2 = c1 + 1;

    while (c1 < size && c2 < size)
    {
        swap(arr[c1], arr[c2]);
        c1 += 2;
        c2 += 2;
    }
}