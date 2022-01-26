#include<bits/stdc++.h>
using namespace std;

void getAnArray(int arr[], int size);
bool isPossibleSol(int arr[], int size, int painters, int mid);

int main() {

    cout << endl;
    int n, m, s, e, mid, sum = 0, ans = -1;
    cout << "How many units of board you wanna distribute to painters?" << endl;
    cin >> n;

    int arr[n];

    getAnArray(arr, n);

    cout << endl;
    cout << "Enter number of painters you wanna distribute the boards among." << endl;
    cin >> m;

    s = 0;

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    e = sum;

    mid = s + (e - s) / 2;

    while(s <= e){
        if(isPossibleSol(arr, n, m, mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }

    cout << endl;
    cout << "Minimum Number of boards per painter to distribute are : " << ans << endl;
    cout << endl;
}


void getAnArray(int arr[], int size)
{
    cout << endl;
    cout << "Please start inputting the number of spaces in the respective boards." << endl;
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "Finished getting the number of spaces in the respective boards." << endl;
}

bool isPossibleSol(int arr[], int size, int painters, int mid){
    int boardSum = 0;
    int painterCount = 1;

    for(int i = 0; i < size; i++){
        if(boardSum + arr[i] <= mid){
            boardSum += arr[i];
        }
        else{
            painterCount++;
            if((painterCount > painters) || (arr[i] > mid)){
                return false;
            }
            boardSum = arr[i];
        }
    }
    return true;
}