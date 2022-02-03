#include <bits/stdc++.h>
#include <set>

using namespace std;

int main()
{

    //! set always gives the values in ordered manner
    //! unordered set always gives random value

    set<int> s;

    s.insert(1);
    s.insert(0);
    s.insert(3);
    s.insert(4);
    s.insert(7);
    s.insert(-2);
    s.insert(6);
    s.insert(6);
    s.insert(1);

    for (int i : s)
    {
        cout << i << " ";
    }

    cout << endl;

    s.erase(s.begin());

    cout << "After Erasing" << endl;

    for (int i : s)
    {
        cout << i << " ";
    }

    cout << endl;

    //! count - it will tell us if element is present in set

    if (s.count(-2))
    {
        cout << "Present." << endl;
    }
    else
    {
        cout << "Not Present." << endl;
    }

    set<int>::iterator itr = s.find(4);

    cout << "Place at which we found 4 -> " << *itr << endl;

    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;
}