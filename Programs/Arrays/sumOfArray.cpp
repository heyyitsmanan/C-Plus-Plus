#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << endl;
    cout << "How much size you wanna define for an array? " << endl;
    cin >> n;

    int arr[100], sum = 0;

    cout << endl;

    cout << "Please start inputting the values into the array" << endl;

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << endl;
    cout << "Calculating the sum of the values...." << endl;
    cout << endl;

    for (int j = 0; j < n; j++)
    {
        sum += arr[j];
    }

    cout << endl;
    cout << "Analysing the sum of all the elements....." << endl;
    cout << endl;
    cout << "The sum of the array is : " << sum << endl;
    cout << endl;

    return 0;
}