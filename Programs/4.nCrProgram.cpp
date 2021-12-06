#include <iostream>
using namespace std;

int ncr(int n, int r);
int factorial(int num);

int main()
{
    int n, r, ans;
    cout << endl;
    cout << "*=*=*=*=*=*  nCr (P&C) Program   *=*=*=*=*=*" << endl;
    cout << endl;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    cout << endl;
    cout << "Enter the value of r: " << endl;
    cin >> r;
    cout << endl;

    ans = ncr(n, r);

    cout << "Answer of ncr for values " << n << " and " << r << " is : " << ans << endl;
    cout << endl;
}

int ncr(int n, int r)
{
    return (factorial(n) / (factorial(r) * factorial(n - r)));
}

int factorial(int num)
{
    int i, ans = 1;
    for (i = num; i >= 1; i--)
    {
        ans = ans * i;
    }
    return ans;
}