#include <iostream>
using namespace std;

int findSquareRoot(int n);
double preciseSquareRoot(int n, int p, int r);

int main()
{
    cout << endl;
    int num, precision;
    cout << endl;
    cout << "Enter a number to find square root of it: " << endl;
    cout << endl;
    cin >> num;
    cout << endl;
    cout << "To which precision you want the solution to be returned : " << endl;
    cout << endl;
    cin >> precision;
    cout << endl;

    int intRoot = findSquareRoot(num);
    double floatRoot = preciseSquareRoot(num, precision, intRoot);

    cout << endl;
    cout << "The Square Root of " << num << " upto " << precision << " precision is " << floatRoot << endl;
    cout << endl;
}

int findSquareRoot(int n)
{
    int s = 0, e = n, ans = -1;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if ((mid * mid) == n)
        {
            ans = mid;
        }
        if ((mid * mid) > n)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double preciseSquareRoot(int n, int p, int r)
{
    double precision = 1;
    double ans = r;

    for (int i = 0; i < p; i++)
    {
        precision /= 10;
        for (double j = ans; j * j < n; j += precision)
        {
            ans = j;
        }
    }
    return ans;
}