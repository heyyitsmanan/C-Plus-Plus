#include <iostream>
using namespace std;

int main()
{
    int totalAmount;
    cout << endl;
    cout << "*=*=*=*=*=*  Denomination Counting Program   *=*=*=*=*=*" << endl;
    cout << endl;
    cout << "Enter the total amount for which you want to check denominations ? : " << endl;
    cin >> totalAmount;
    cout << endl;

    //* Number of denominations or notes which we will count

    int den100, den50, den20, den10, den5, den2, den1;
    den100 = den50 = den20 = den10 = den5 = den2 = den1 = 0;

    //* Value of all the denominations which are available

    int vden100 = 100, vden50 = 50, vden20 = 20, vden10 = 10, vden5 = 5, vden2 = 2, vden1 = 1;

    //* balAmount will denote Balance Amount after each iteration

    int balAmount = totalAmount;

    switch (100)
    {
    case 100:
        den100 = balAmount / vden100;
        balAmount = balAmount - (den100 * vden100);

    case 50:
        den50 = balAmount / vden50;
        balAmount = balAmount - (den50 * vden50);

    case 20:
        den20 = balAmount / vden20;
        balAmount = balAmount - (den20 * vden20);

    case 10:
        den10 = balAmount / vden10;
        balAmount = balAmount - (den10 * vden10);

    case 5:
        den5 = balAmount / vden5;
        balAmount = balAmount - (den5 * vden5);

    case 2:
        den2 = balAmount / vden2;
        balAmount = balAmount - (den2 * vden2);

    case 1:
        den1 = balAmount / vden1;
        balAmount = balAmount - (den1 * vden1);
        break;
    }

    cout << "Number of Rs. 100 Notes: " << den100 << endl;
    cout << "Number of Rs. 50 Notes: " << den50 << endl;
    cout << "Number of Rs. 20 Notes: " << den20 << endl;
    cout << "Number of Rs. 10 Notes: " << den10 << endl;
    cout << "Number of Rs. 5 Notes: " << den5 << endl;
    cout << "Number of Rs. 2 Notes: " << den2 << endl;
    cout << "Number of Rs. 1 Notes: " << den1 << endl;
}