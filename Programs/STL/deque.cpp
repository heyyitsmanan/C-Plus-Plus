#include <bits/stdc++.h>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    for (int i : d)
    {
        cout << i << " ";
    }

    cout << endl;

    d.push_back(4);
    d.push_front(3);
    d.push_front(2);
    d.push_back(5);
    d.push_front(1);

    cout << "Element at 2nd Index -> " << d.at(2) << endl;

    d.pop_front();
    d.pop_back();

    cout << "Element at 2nd Index -> " << d.at(2) << endl;

    for (int i : d)
    {
        cout << i << " " << endl;
    }

    cout << endl;

    if (d.empty())
        cout << "Empty" << endl;
    else
        cout << "Not Empty" << endl;
}