// stack using two queues

// algorithm -> at first pop all the elements of q1 and store it in q2, then push the element x in the q1 and then push back all the elements of q2 again to q1
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

void QueueStack ::push(int x)
{
    while (!q1.empty())
    {
        q2.push(q1.front());
        q1.pop();
    }
    q1.push(x);
    while (!q2.empty())
    {
        q1.push(q2.front());
        q2.pop();
    }
}

// Function to pop an element from stack using two queues.
int QueueStack ::pop()
{
    if (!q1.empty())
    {
        int ans = q1.front();
        q1.pop();
        return ans;
    }
    return -1;
}

int main()
{

    return 0;
}