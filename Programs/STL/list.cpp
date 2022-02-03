#include <bits/stdc++.h>
#include <list>

using namespace std;

int main()
{
    list<int> l;

    for (int i : l)
    {
        cout << i << " ";
    }

    cout << endl;

    l.push_back(4);
    l.push_front(3);
    l.push_front(2);
    l.push_back(5);
    l.push_front(1);

    l.pop_front();
    l.pop_back();

    for (int i : l)
    {
        cout << i << " " << endl;
    }

    cout << endl;

    if (l.empty())
        cout << "Empty" << endl;
    else
        cout << "Not Empty" << endl;
}