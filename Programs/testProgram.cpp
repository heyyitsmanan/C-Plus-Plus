#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number to check..." << endl;
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "First Case" << endl;
        break;

    case 2:
        cout << "Second Case" << endl;
        break;

    case 3:
        cout << "Third Case" << endl;
        break;

    case 4:
        cout << "Fourth Case" << endl;
        break;

    default:
        cout << "It's a default case." << endl;
        cout << "Cases are available from 1-4." << endl;
        // continue;
        break;
    }
}