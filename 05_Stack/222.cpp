// sort a stack

// algorithm -> use recursion to sort the stack by using the logic of sorted inserting every element
// t.c -> O(n^2)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

void sortedInsert(stack<int> &s, int ele)
{
    if (s.empty() || s.top() <= ele)
    {
        s.push(ele);
        return;
    }
    int temp = s.top();
    s.pop();
    sortedInsert(s, ele);
    s.push(temp);
}

void sortStack(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int temp = s.top();
    s.pop();
    sortStack(s);
    sortedInsert(s, temp);
}

int main()
{

    return 0;
}