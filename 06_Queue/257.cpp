// queue push and pop

#include <bits/stdc++.h>
using namespace std;

queue<int> _push(int arr[], int n)
{
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        q.push(arr[i]);
    }
    return q;
}

void _pop(queue<int> s)
{
    while (!s.empty())
    {
        cout << s.front() << " ";
        s.pop();
    }
}

int main()
{

    return 0;
}