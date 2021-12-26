#include <iostream>
using namespace std;

void getAnArray(int arr[], int size);
void sort012Array(int arr[], int size);
void printAnArray(int arr[], int size);

int main()
{

    int n;
    cout << endl;
    cout << "For how many students you want to create an array?" << endl;
    cin >> n;

    int arr[n];
    int sizeOfArray = sizeof(arr) / sizeof(int);

    getAnArray(arr, sizeOfArray);

    sort012Array(arr, sizeOfArray);

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
    cout << "Now sorting will start ;)." << endl;
}

void sort012Array(int arr[], int size)
{
    cout << endl;
    cout << "Sorting the array...." << endl;
    cout << endl;

    int i = 0, j = size - 1, k = 0;

    while (k <= j)
    {
        if (arr[k] == 1)
        {
            k++;
        }
        else if (arr[k] < 1)
        {
            swap(arr[k], arr[i]);
            i++;
            k++;
        }
        else
        {
            swap(arr[k], arr[j]);
            j--;
        }
    }

    cout << endl;
    cout << "Sorting ended and you have got the array." << endl;
    cout << endl;
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
    cout << "Finished printing the array." << endl;
    cout << endl;
}