#include <bits/stdc++.h>
#include <queue>

using namespace std;

int main()
{
    queue<string> q;

    q.push("Manan");
    q.push("Ahuja");
    q.push("Saksham");
    q.push("Ahuja");

    cout << "Size of the queue before popping -> " << q.size() << endl;

    cout << "Element at the front of queue -> " << q.front() << endl;

    q.pop();

    cout << "Element at the top of queue after popping -> " << q.front() << endl;

    cout << "Size of the queue after popping -> " << q.size() << endl;

    cout << "Is queue empty ? -> " << q.empty() << endl;
}