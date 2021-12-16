#include <iostream>
using namespace std;

void getAnArray(int arr[], int size);
bool isElementThere(int arr[], int size, int element);

int main()
{
    int n, element;
    cout << endl;
    cout << "How much size you wanna define of an array? " << endl;
    cout << endl;
    cin >> n;
    cout << endl;
    cout << "Enter the element you want to search in the array: " << endl;
    cout << endl;
    cin >> element;

    int arr[100];
    bool isElementFound = true;

    getAnArray(arr, n);

    isElementFound = isElementThere(arr, n, element);

    if (isElementFound)
    {
        cout << endl;
        cout << "We have found the element you searched for :)" << endl;
        cout << endl;
    }
    else
    {
        cout << endl;
        cout << "The element you searched for is not present in the array." << endl;
        cout << endl;
    }
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

bool isElementThere(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return 1;
        }
    }
    return 0;
}