#include <bits/stdc++.h>
using namespace std;

void getAnArray(int arr[], int n);
void reverseTheArray(int arr[], int n, int m);
void printAnArray(vector<int> arr, int n);

int main()
{
    cout << endl;
    int n, m;
    cout << "For how many elements you wanna create an array?" << endl;
    cin >> n;

    int arr[n];

    getAnArray(arr, n);

    cout << endl;
    cout << "From which point you wanna reverse the array (Input the index please) ?" << endl;
    cin >> m;
    cout << endl;

    reverseTheArray(arr, n, m);

    return 0;
}

void getAnArray(int arr[], int n)
{
    cout << endl;
    cout << "Please start inputting the values of the array." << endl;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "Finished getting an array." << endl;
}

void reverseTheArray(int arr[], int n, int m)
{
    vector<int> newArr;

    for (int i = 0; i <= m; i++)
    {
        newArr.push_back(arr[i]);
    }

    for (int j = (n - 1); j > m; j--)
    {
        newArr.push_back(arr[j]);
    }

    cout << endl;
    cout << "Now printing will start ;)." << endl;

    printAnArray(newArr, n);
}

void printAnArray(vector<int> arr, int n)
{
    cout << endl;
    cout << "Starting to print an array of " << n << " elements." << endl;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    cout << "Finished printing an array." << endl;
    cout << endl;
}