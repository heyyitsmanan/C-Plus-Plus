#include <iostream>

using namespace std;

void pattern1();
void pattern2();
void pattern3();
void pattern4();
void pattern5();
void pattern6();
void pattern7();
void pattern8();

int main()
{

    int no_of_pattern;
    cout << endl;
    cout << "Select which pattern you want to print from below list:" << endl;
    cout << endl;
    cout << "1. Inverted Pattern" << endl;
    cout << "2. 0 - 1 Pattern" << endl;
    cout << "3. Rhombus Pattern" << endl;
    cout << "4. Number Pyramid Pattern" << endl;
    cout << "5. Palindromic Pattern" << endl;
    cout << "6. Star Pattern" << endl;
    cout << "7. Zig-Zag Pattern" << endl;
    cout << "8. Pascal's Triangle" << endl;
    cout << endl;
    cin >> no_of_pattern;
    cout << endl;

    switch (no_of_pattern)
    {
    case 1:
        pattern1();
        break;

    case 2:
        pattern2();
        break;

    case 3:
        pattern3();
        break;

    case 4:
        pattern4();
        break;

    case 5:
        pattern5();
        break;

    case 6:
        pattern6();
        break;

    case 7:
        pattern7();
        break;

    case 8:
        pattern8();
        break;

    default:
        cout << "Invalid Number, please select a number from above given list :)" << endl;
        cout << endl;
    }

    return 0;
}

void pattern1()
{

    // Inverted Pattern
    cout << endl;
    cout << "You are going to see a inverted pattern XOXO" << endl;

    int i, j, n;
    cout << endl;
    cout << "Enter height of pattern:" << endl;
    cin >> n;
    cout << endl;

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;
}

void pattern2()
{

    // 0 - 1 Pattern
    cout << endl;
    cout << "You are going to see a 0 - 1 pattern XOXO" << endl;

    int i, j, n, sum;
    cout << endl;
    cout << "Enter height of pattern:" << endl;
    cin >> n;
    cout << endl;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            sum = i + j;
            if (sum % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    cout << endl;
}

void pattern3()
{

    // Rhombus Pattern
    cout << endl;
    cout << "You are going to see a rhombus pattern XOXO" << endl;

    int n, i, j, k;

    cout << endl;
    cout << "Enter height of rhombus: " << endl;
    cout << endl;
    cin >> n;
    cout << endl;

    for (i = 0; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (k = 1; k <= n; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;
}

void pattern4()
{

    // Number Pyramid Pattern
    cout << endl;
    cout << "You are going to see a number pyramid pattern XOXO" << endl;

    int n, i, j, k;
    cout << endl;
    cout << "Enter height of pyramid: " << endl;
    cout << endl;
    cin >> n;
    cout << endl;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << k << " ";
        }
        cout << endl;
    }

    cout << endl;
}

void pattern5()
{

    // Palindromic Pattern
    cout << endl;
    cout << "You are going to see a palindromic pattern XOXO" << endl;

    int n, i, j, k, l;
    cout << endl;
    cout << "Enter height of pyramid: " << endl;
    cout << endl;
    cin >> n;
    cout << endl;

    // Method - 1 (My Logic)

    for (i = 1; i <= n; i++)
    {
        for (l = 1; l <= n - i; l++)
        {
            cout << "  ";
        }
        for (k = i; k >= 2; k--)
        {
            cout << k << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    // Logic - 2 (Mam's Logic)
    /*
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        k = i;
        for (; j <= n; j++)
        {
            cout << k-- << " ";
        }
        k = 2;
        for (; j <= n + i - 1; j++)
        {
            cout << k++ << " ";
        }
        cout << endl;
    }
*/
    cout << endl;
}

void pattern6()
{

    // Star Pattern
    cout << endl;
    cout << "You are going to see a star pattern XOXO" << endl;

    int n, i, j;
    cout << endl;
    cout << "Enter height of star: " << endl;
    cout << endl;
    cin >> n;
    cout << endl;

    for (i = 1; i <= n; ++i)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;
}

void pattern7()
{

    // Zig-Zag Pattern
    cout << endl;
    cout << "You are going to see a zig-zag pattern XOXO" << endl;

    int n, i, j, sum = 0;
    cout << endl;
    cout << "Enter height of zig-zag's: " << endl;
    cout << endl;
    cin >> n;
    cout << endl;

    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= n; j++)
        {
            sum = i + j;
            if (sum % 4 == 0 || (i == 2) && (j % 4 == 0))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << endl;
}

int getMeFactorial(int n)
{
    int fact = 1, i;
    for (i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int ans = getMeFactorial(n) / (getMeFactorial(r) * getMeFactorial(n - r));
    return ans;
}

void pattern8()
{

    // Pascal's Triangle
    cout << endl;
    cout << "You are going to see a Pascal's Triangle XOXO" << endl;

    int n, i, j;
    cout << endl;
    cout << "Enter height of pascal triangle: " << endl;
    cout << endl;
    cin >> n;
    cout << endl;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << nCr(i, j) << " ";
        }
        cout << endl;
    }

    cout << endl;
}