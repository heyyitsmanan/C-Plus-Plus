#include <iostream>

using namespace std;

void pattern1();
void pattern2();
void pattern3();
void pattern4();
void pattern5();
void pattern6();
void pattern7();

int main()
{
    int no_of_pattern;
    cout << endl;
    cout << "Select which pattern you want to print from below list:" << endl;
    cout << endl;
    cout << "1. Rectangle Pattern." << endl;
    cout << "2. Hollow Rectangle Pattern." << endl;
    cout << "3. Inverted Half Pyramid Pattern." << endl;
    cout << "4. Half Pyramid After 180 degree rotation." << endl;
    cout << "5. Half Pyramid Using Numbers." << endl;
    cout << "6. Floyd's Triangle." << endl;
    cout << "7. Butterfly Pattern." << endl;
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

    default:
        cout << "Invalid Number, please select a number from above given list :)" << endl;
        cout << endl;
    }

    return 0;
}

void pattern1()
{

    // Rectangle Pattern
    cout << endl;
    cout << "You are going to see a rectangle pattern XO XO" << endl;

    int rows, columns, i, j;
    cout << endl;
    cout << "Enter no. of rows:";
    cout << endl;
    cin >> rows;
    cout << endl;
    cout << "Enter no. of columns:";
    cout << endl;
    cin >> columns;
    cout << endl;

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= columns; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;
}

void pattern2()
{

    // Hollow Rectangle Pattern
    cout << endl;
    cout << "You are going to see a hollow rectangle pattern XO XO" << endl;

    int rows, columns, i, j;
    cout << endl;
    cout << "Enter no. of rows:";
    cout << endl;
    cin >> rows;
    cout << endl;
    cout << "Enter no. of columns:";
    cout << endl;
    cin >> columns;
    cout << endl;

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= columns; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == columns)
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

void pattern3()
{

    // Inverted Half Pyramid Pattern
    cout << endl;
    cout << "You are going to see a inverted half pyramid pattern XO XO" << endl;

    int n, i, j;

    cout << endl;
    cout << "Enter height of pyramid: " << endl;
    cout << endl;
    cin >> n;
    cout << endl;

    for (i = 0; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;
}

void pattern4()
{

    // Half Pyramid After 180 degree rotation
    cout << endl;
    cout << "You are going to see a half pyramid after 180 degree rotation pattern XO XO" << endl;

    int n, i, j;
    cout << endl;
    cout << "Enter height of pyramid: " << endl;
    cout << endl;
    cin >> n;
    cout << endl;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    cout << endl;
}

void pattern5()
{

    // Half Pyramid Using Numbers
    cout << endl;
    cout << "You are going to see a half pyramid using numbers pattern XO XO" << endl;

    int n, i, j;
    cout << endl;
    cout << "Enter height of pyramid: " << endl;
    cout << endl;
    cin >> n;
    cout << endl;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << endl;
}

void pattern6()
{

    // Floyd's Triangle
    cout << endl;
    cout << "You are going to see a floyd's triangle pattern XO XO" << endl;

    int n, i, j, count = 1;
    cout << endl;
    cout << "Enter height of triangle: " << endl;
    cout << endl;
    cin >> n;
    cout << endl;

    for (i = 1; i <= n; ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    cout << endl;
}

void pattern7()
{

    // Butterfly Pattern
    cout << endl;
    cout << "You are going to see a butterfly pattern XO XO" << endl;

    int n, i, j, space;
    cout << endl;
    cout << "Enter height of butterfly: " << endl;
    cout << endl;
    cin >> n;
    cout << endl;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        space = 2 * n - 2 * i;
        for (j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        space = 2 * n - 2 * i;
        for (j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;
}