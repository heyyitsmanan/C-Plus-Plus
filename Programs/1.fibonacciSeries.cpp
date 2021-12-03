#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << endl;
    cout << "*=*=*=*=*=*  FIBONACCI SERIES   *=*=*=*=*=*" << endl;
    cout << endl;
    cout << "Enter the length of the series: " << endl;
    cin >> n;
    cout << endl;

    int fNum = 0, sNum = 1;

    cout << fNum << " " << sNum << " ";

    for (int i = 0; i <= n; i++)
    {

        //* Getting next number of the series by adding first one and second one

        int nextNum = fNum + sNum;
        cout << nextNum << " ";

        //* Transferring the values from previous number to next number

        fNum = sNum;
        sNum = nextNum;
    }
    cout << endl;
}