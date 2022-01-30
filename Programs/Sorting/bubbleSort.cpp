#include <bits/stdc++.h>
using namespace std;

void getAnArray(int arr[], int size);
void sortAnArray(int arr[], int size);
void printAnArray(int arr[], int size);

int main()
{
    cout << endl;
    int n;
    cout << "Define a length for an array to sort it using B.S." << endl;
    cin >> n;

    int arr[n];

    getAnArray(arr, n);

    sortAnArray(arr, n);

    printAnArray(arr, n);
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
    cout << endl;
    cout << "Finished getting an array." << endl;
    cout << endl;
    cout << "Now sorting will start ;)." << endl;
}

void sortAnArray(int arr[], int size)
{
    cout << endl;
    cout << "Sorting started using Bubble Sort." << endl;
    cout << endl;

    // int swaps = 0;

    for (int i = 1; i < size; i++)
    {
        bool areSwapped = false;
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                // swaps++;
                areSwapped = true;
            }
        }
        if (areSwapped == false)
            break;
    }

    // cout << swaps << endl;

    cout << endl;
    cout << "Finished sorting the array." << endl;
    cout << endl;
    cout << "Now printing will start ;)." << endl;
}

void printAnArray(int arr[], int size)
{
    cout << endl;
    cout << "Starting to print an array of " << size << " elements." << endl;
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Finished printing an array." << endl;
    cout << endl;
}