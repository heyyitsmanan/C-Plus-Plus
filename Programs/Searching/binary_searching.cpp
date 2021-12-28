#include <iostream>
using namespace std;

int findElement(int arr[], int size, int key);

int main()
{
    int evenArr[8] = {3, 5, 6, 9, 12, 18, 23, 29};
    int oddArr[11] = {1, 4, 8, 10, 15, 19, 24, 27, 32, 38, 47};

    int evenKey = 5;
    int oddKey = 47;

    int evenIndex = findElement(evenArr, 8, evenKey);
    int oddIndex = findElement(oddArr, 11, oddKey);

    if (evenIndex >= 0)
    {
        cout << endl;
        cout << "The Element " << evenKey << " is found at " << evenIndex << " location." << endl;
        cout << endl;
    }
    else
    {
        cout << endl;
        cout << "Sorry, the element " << evenKey << " was not found in the array." << endl;
        cout << endl;
    }

    if (oddIndex >= 0)
    {
        cout << endl;
        cout << "The Element " << oddKey << " is found at " << oddIndex << " location." << endl;
        cout << endl;
    }
    else
    {
        cout << endl;
        cout << "Sorry, the element " << oddKey << " was not found in the array." << endl;
        cout << endl;
    }
}

int findElement(int arr[], int size, int key)
{

    int mid, start, end;

    start = 0;
    end = size - 1;

    // mid = (start + end) / 2;

    mid = start + (end - start) / 2; // Optimized for larger values

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        // mid = (start + end) / 2;

        mid = start + (end - start) / 2; // Optimized for larger values
    }
    return -1;
}