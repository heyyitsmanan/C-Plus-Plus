#include <iostream>
using namespace std;

int getPivot(int arr[], int size);

int main()
{
    int arr[9] = {8, 9, 10, 12, 19, 3, 6, 8, 10};

    int pivot = getPivot(arr, 9);

    cout << endl;
    cout << "The Pivot in the given array is at index " << pivot << endl;
    cout << endl;
}

int getPivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;

    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}