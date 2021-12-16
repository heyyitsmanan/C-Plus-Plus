#include <iostream>
using namespace std;

void getAnArray(int arr[], int size);

int main()
{
    int n;
    cout << endl;
    cout << "How much size you wanna define of an array? " << endl;
    cout << endl;
    cin >> n;
    cout << endl;

    int arr[100], rarr[100];

    getAnArray(arr, n);

    for (int i = n; i > 0; i--)
    {
        rarr[n - i] = arr[i - 1];
    }

    cout << endl;
    cout << "Reversed array is ....." << endl;
    cout << endl;

    for (int j = 0; j < n; j++)
    {
        cout << rarr[j] << " ";
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