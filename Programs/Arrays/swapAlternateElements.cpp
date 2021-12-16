#include <iostream>
using namespace std;

void getAnArray(int arr[], int size);
void swapAlternateElements(int arr[], int size);

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

    swapAlternateElements(arr, n);

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

void swapAlternateElements(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start += 2;
        end -= 2;
    }
}