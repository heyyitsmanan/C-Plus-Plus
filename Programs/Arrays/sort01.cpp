#include <iostream>
using namespace std;

void getAnArray(int arr[], int size);
void sort01Array(int arr[], int size);
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

    sort01Array(arr, sizeOfArray);

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

void sort01Array(int arr[], int size)
{
    cout << endl;
    cout << "Sorting the array...." << endl;
    cout << endl;

    int left = 0, right = size - 1;

    while (left <= right)
    {
        if (arr[left] == 0)
        {
            left++;
        }
        else if (arr[right] == 1)
        {
            right--;
        }
        else
        {
            swap(arr[left], arr[right]);
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