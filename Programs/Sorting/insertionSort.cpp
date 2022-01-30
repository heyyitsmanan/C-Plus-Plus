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
    cout << "Sorting started using Insertion Sort." << endl;
    cout << endl;

    //* Using For Loop

    /* for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    } */

    //* Using While Loop

    int i = 1, j;

    while (i < size)
    {
        int temp = arr[i];
        j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        arr[j + 1] = temp;
        i++;
    }

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