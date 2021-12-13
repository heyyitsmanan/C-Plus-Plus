#include <iostream>
using namespace std;

void printAnArray(int arr[], int size);
void getAnArray(int arr[], int size);

int main()
{

    int n;
    cout << "For how many students you want to create an array?" << endl;
    cin >> n;

    int arr[n];
    int sizeOfArray = sizeof(arr) / sizeof(int);

    getAnArray(arr, sizeOfArray);

    printAnArray(arr, sizeOfArray);

    return 0;
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
    cout << "Now printing will start ;)." << endl;
}

void printAnArray(int arr[], int size)
{
    cout << endl;
    cout << "Starting to print an array of " << size << " elements." << endl;
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    cout << "Finished printing an array." << endl;
    cout << endl;
}