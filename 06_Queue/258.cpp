// queue reversal

// algorithm 1 -> use a stack and store elements in it and then one by one pop it elements and store it in the queue
// t.c -> O(n)
// s.c -> O(n)

// algorithm 2 -> a simple and concise way of reversing a queue is by using recursion, we pop the front element and store it in an element and then call the solve function for other elements and while returning we will store the element at the back again
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

void solve(queue<int> &q)
{
    if (q.empty())
    {
        return;
    }
    int temp = q.front();
    q.pop();
    solve(q);
    q.push(temp);
}

queue<int> rev(queue<int> q)
{
    solve(q);
    return q;
}

int main()
{

    return 0;
}