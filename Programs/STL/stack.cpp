#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main()
{
    stack<string> s;

    s.push("Manan");
    s.push("Ahuja");
    s.push("Saksham");
    s.push("Ahuja");

    cout << "Element at the top of stack -> " << s.top() << endl;

    s.pop();

    cout << "Element at the top of stack after popping -> " << s.top() << endl;

    cout << "Size of the stack -> " << s.size() << endl;

    cout << "Is stack empty ? -> " << s.empty() << endl;
}