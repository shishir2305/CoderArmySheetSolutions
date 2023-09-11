// reverse first k elements of a queue

// algorithm -> at first store first k elements of the queue in a stack then store all the elements of the stack in the q now for remaining n-k elements of queue one by one store the front element and pop the front from queue and then store the element back in the queue at the back
// t.c -> O(n)
// s.c -> O(k) stack space

#include <bits/stdc++.h>
using namespace std;

queue<int> modifyQueue(queue<int> q, int k)
{
    int n = q.size();
    stack<int> st;
    for (int i = 0; i < k; i++)
    {
        st.push(q.front());
        q.pop();
    }
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    for (int i = 0; i < n - k; i++)
    {
        int temp = q.front();
        q.pop();
        q.push(temp);
    }
    return q;
}

int main()
{

    return 0;
}