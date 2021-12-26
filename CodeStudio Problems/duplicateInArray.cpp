#include <iostream>
using namespace std;

void getAnArray(int arr[], int size);
int findDuplicate(int arr[], int size);

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

    int duplicate = findDuplicate(arr, n);

    cout << endl;
    cout << "Duplicate element from the array is ..... " << duplicate << endl;
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

int findDuplicate(int arr[], int size)
{
    int element = 0, counter = 0;
    for (int i = 0; i < size; i++)
    {
        element = arr[counter];
        if (element == arr[i])
        {
                }
    }
}