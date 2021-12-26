//! Problem: 1207. Unique Number of Occurrences
//? Problem Description: Given an array of integers arr, return true if the number of occurrences of each value in the array is unique, or false otherwise.

#include <iostream>
using namespace std;

void getAnArray(int arr[], int size);
int findUniqueOcc(int arr[], int size);
int checkIfUnique(int arr[], int size);

int main()
{
    int n;
    cout << endl;
    cout << "How much size you wanna define of an array? " << endl;
    cout << endl;
    cin >> n;
    cout << endl;

    int arr[100];

    getAnArray(arr, n);

    int unique = findUniqueOcc(arr, n);

    if (unique)
    {
        return false;
    }
    else
    {
        return true;
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

int findUniqueOcc(int arr[], int size)
{
    int size2 = 0, ans = 0;
    int occArr[100];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                occArr[i] = arr[i];
            }
        }
    }
    size2 = sizeof(occArr) / sizeof(occArr[0]);
    ans = checkIfUnique(occArr, size2);
    return ans;
}

int checkIfUnique(int arr[], int size)
{
    int varToCheck = 0, index = arr[varToCheck], ans = 0;
    for (int i = 0; i < size; i++)
    {
        if (index == arr[i])
        {
            ans = 1;
        }
        else
        {
            ans = 0;
        }
    }
    return ans;
}