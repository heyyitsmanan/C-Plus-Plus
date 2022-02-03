#include <bits/stdc++.h>
#include <map>

using namespace std;

int main()
{
    //! map always stores value in key -> pair manner and no key is redundant i.e. no duplicate keys could be present but values can be duplicate

    //* we will always get sorted keys in case of ordered map but will get random values in case of unordered map (no matter in what order we input values)

    map<int, string> m;

    m[1] = "Manan";
    m[3] = "Saksham";
    m[2] = "Rahul";
    m[4] = "Ishu";

    m.insert({5, "Aanya"});

    cout << "Before Erasing : " << endl;

    for (auto i : m)
    {
        cout << i.first << " -> " << i.second << endl;
    }

    cout << "Find key 3 -> " << m.count(3) << endl;

    m.erase(2);

    cout << "After Erasing : " << endl;

    for (auto i : m)
    {
        cout << i.first << " -> " << i.second << endl;
    }

    //? It'll find the element and return all the elements coming after it

    cout << endl;

    auto it = m.find(3);

    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << " -> " << (*i).second << endl;
    }
}