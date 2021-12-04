//! Problem: 1281 - Subtract the Product and Sum of Digits of an Integer
//? Problem Description: Given an integer number n, return the difference between the product of its digits and the sum of its digits.


#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int product = 1, sum = 0, difference = 0, digit;

    while (n > 0){
        digit = n % 10;
        product *= digit;
        sum += digit;
        n /= 10;
    }
    difference = product - sum;
    cout << difference << endl;  
    //* return difference; ( For Online Coding Platforms)  
}