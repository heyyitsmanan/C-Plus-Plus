#include <iostream>
#include <limits.h>
using namespace std;

int getMinElement(int arr[], int size);
int getMaxElement(int arr[], int size);

int main()
{

    int n;
    cout << endl;
    cout << "How much size you wanna define for an array? " << endl;
    cin >> n;

    int arr[100];

    cout << endl;

    cout << "Please start inputting the values into the array" << endl;

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << endl;
    cout << "Analysing the array and finding the minimum element....." << endl;
    cout << endl;
    cout << "The minimum element is : " << getMinElement(arr, n) << endl;
    cout << endl;

    cout << endl;
    cout << "Analysing the array and finding the maximum element....." << endl;
    cout << endl;
    cout << "The maximum element is : " << getMaxElement(arr, n) << endl;
    cout << endl;

    return 0;
}

int getMinElement(int arr[], int size)
{
    int minNum = INT_MAX;

    for (int i = 0; i < size; i++)
    {

        // Using the max function

        minNum = min(arr[i], minNum);

        // Using the logic

        // if (arr[i] < minNum)
        // {
        //     minNum = arr[i];
        // }
    }

    return minNum;
}

int getMaxElement(int arr[], int size)
{
    int maxNum = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        // Using the max function

        maxNum = max(arr[i], maxNum);

        // Using the logic

        // if (arr[i] > maxNum)
        // {
        //     maxNum = arr[i];
        // }
    }

    return maxNum;
}