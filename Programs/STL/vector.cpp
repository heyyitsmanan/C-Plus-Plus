#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    cout << endl;

    vector<int> a;

    a.push_back(1);
    cout << a.capacity() << endl;

    a.push_back(2);
    cout << a.capacity() << endl;

    a.push_back(3);
    cout << a.capacity() << endl;

    cout << a.size() << endl;

    // cout << "Element at 3rd index: " << a.at(3) << endl;

    cout << "1st Element: " << a.front() << endl;
    cout << "Last Element: " << a.back() << endl;

    a.pop_back();

    for (int i : a)
        cout << i << " ";
    cout << endl;
}