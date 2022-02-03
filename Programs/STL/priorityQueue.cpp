#include <bits/stdc++.h>
using namespace std;

int main()
{

    //* max_heap - whenever we fetch we'll get greatest element

    priority_queue<int> max_pq;

    //* min_heap - whenever we fetch we'll get smallest element

    priority_queue<int, vector<int>, greater<int>> min_pq;

    max_pq.push(1);
    max_pq.push(0);
    max_pq.push(3);
    max_pq.push(2);
    max_pq.push(4);

    min_pq.push(1);
    min_pq.push(0);
    min_pq.push(3);
    min_pq.push(2);
    min_pq.push(4);

    cout << "Size of max priority_queue -> " << max_pq.size() << endl;
    cout << "Size of min priority_queue -> " << min_pq.size() << endl;

    int n_max = max_pq.size();
    int n_min = min_pq.size();

    for (int i = 0; i < n_max; i++)
    {
        cout << max_pq.top() << " ";
        max_pq.pop();
    }

    cout << endl;

    for (int j = 0; j < n_min; j++)
    {
        cout << min_pq.top() << " ";
        min_pq.pop();
    }

    cout << endl;
}