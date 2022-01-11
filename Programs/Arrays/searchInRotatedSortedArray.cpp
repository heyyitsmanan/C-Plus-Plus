#include <iostream>
using namespace std;

int getPivot(int arr[], int size);
int searchElement(int arr[], int size, int key, int pivot);
int binarySearch(int arr[], int size, int start, int end, int key);

int main()
{
    int arr[9] = {21, 28, 32, 4, 7, 9, 11, 13, 17};

    int key = 9;

    int pivot = getPivot(arr, 9);

    cout << pivot << endl;

    int elementFound = searchElement(arr, 9, key, pivot);

    cout << elementFound << endl;

    if (elementFound >= 0)
    {
        cout << endl;
        cout << "The Element " << key << " in the given array is at index " << elementFound << endl;
        cout << endl;
    }
    else
    {
        cout << endl;
        cout << "The Element " << key << " in the given array is not present." << endl;
        cout << endl;
    }
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

int searchElement(int arr[], int size, int key, int pivot)
{
    int s = 0, e = size - 1;
    int isElementThere = -1;

    if ((key >= arr[pivot]) && (key <= arr[size - 1]))
    {
        s = pivot;
        e = size - 1;
        cout << s << " " << e << " Neeche vaali line" << endl;
        isElementThere = binarySearch(arr, size, s, e, key);
    }
    else
    {
        s = 0;
        e = pivot - 1;
        cout << s << " " << e << " Upar vaali line" << endl;
        isElementThere = binarySearch(arr, size, s, e, key);
    }
    return isElementThere;
}

int binarySearch(int arr[], int size, int start, int end, int key)
{
    int s = start, e = end;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key >= arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}