#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << endl;
    cout << "*=*=*=*=*=*  PRIME OR NOT   *=*=*=*=*=*" << endl;
    cout << endl;
    cout << "Enter the number to be checked if it's a prime or not ? : " << endl;
    cin >> n;
    cout << endl;

    bool isPrime = true;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        cout << n << " is a prime number." << endl;
        cout << endl;
    }
    else
    {
        cout << n << " is not a prime number." << endl;
        cout << endl;
    }
}