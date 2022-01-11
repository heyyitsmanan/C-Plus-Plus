#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key);
int lastOcc(int arr[], int size, int key);

int main()
{
    int arr[9] = {1, 2, 3, 4, 3, 5, 3, 3, 3};

    int arrKey = 3;

    int elIndexF = firstOcc(arr, 9, arrKey);
    int elIndexL = lastOcc(arr, 9, arrKey);

    if (elIndexF >= 0)
    {
        cout << endl;
        cout << "The Element " << arrKey << " first occurrence is at " << elIndexF << " location." << endl;
        cout << endl;
    }
    else
    {
        cout << endl;
        cout << "Sorry, the element " << arrKey << " was not found in the array." << endl;
        cout << endl;
    }

    if (elIndexL >= 0)
    {
        cout << endl;
        cout << "The Element " << arrKey << " last occurrence is at " << elIndexL << " location." << endl;
        cout << endl;
    }
    else
    {
        cout << endl;
        cout << "Sorry, the element " << arrKey << " was not found in the array." << endl;
        cout << endl;
    }
}

int firstOcc(int arr[], int size, int key)
{
    int start = 0, end = size - 1, ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid]) // "else" could have been used too
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key)
{
    int start = 0, end = size - 1, ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid]) // "else" could have been used too
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}