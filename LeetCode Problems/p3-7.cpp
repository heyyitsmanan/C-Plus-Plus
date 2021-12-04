//! Problem: 7. Reverse Integer
//? Problem Description: Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.

#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int digit = 0, ans = 0;

    while (n != 0)
    {
        digit = n % 10;
        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
        {
            //* return 0; (For Online Coding Platforms)
            ans = 0;
            break;
        }
        ans = (ans * 10) + digit;
        n /= 10;
    }

    cout << ans << endl;
    //* return counter; ( For Online Coding Platforms)
}