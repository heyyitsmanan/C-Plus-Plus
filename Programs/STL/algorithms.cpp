#include <bits/stdc++.h>
#include <algorithm>
#include <vector> //* just including for reference otherwise <bits/stdc++> will include everything

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(7);
    v.push_back(9);
    v.push_back(12);

    //! BINARY SEARCH

    cout << "* Searching 9 -> " << binary_search(v.begin(), v.end(), 9) << endl;

    //* returns an iterator for which we searched the value

    cout << "* Lower Bound -> " << lower_bound(v.begin(), v.end(), 7) - v.begin() << endl;

    //* returns an element after the iterator for which we searched

    cout << "* Upper Bound -> " << upper_bound(v.begin(), v.end(), 7) - v.begin() << endl;

    //! MAX, MIN, SWAP, Reverse of string, Rotate the array, Sorting

    int a = 12, b = 5;

    cout << "* Max of A and B -> " << max(a, b) << endl;

    cout << "* Min of A and B -> " << min(a, b) << endl;

    cout << "* Values before swap -> a is now: " << a << " and b is now: " << b << endl;

    cout << "Swapped the values of A and B." << endl;

    swap(a, b);

    cout << "* Values after swap -> a is now: " << a << " and b is now: " << b << endl;

    string s = "abcdef";

    cout << "* Original string is -> " << s << endl;

    reverse(s.begin(), s.end());

    cout << "* Reversed string is -> " << s << endl;

    cout << endl;

    cout << "* The Vector Contains: " << endl;

    for (int i : v)
    {
        cout << i << " ";
    }

    cout << endl;

    rotate(v.begin(), v.begin() + 2, v.end());

    cout << "* The Vector After Rotation of 2 became: " << endl;

    for (int i : v)
    {
        cout << i << " ";
    }

    cout << endl;

    cout << "* Sorting the vector: " << endl;

    sort(v.begin(), v.end());

    cout << "* Sorted vector is: " << endl;

    for (int i : v)
    {
        cout << i << " ";
    }
}