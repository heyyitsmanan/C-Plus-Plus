//! Problem: 191. Number of 1 Bits
//? Problem Description: Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).


#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int counter = 0;

    while (n != 0){
        if (n & 1){
            counter++;
        }
        n = n >> 1;
    }
    cout << counter << endl;
    //* return counter; ( For Online Coding Platforms)  
}