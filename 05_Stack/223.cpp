// delete middle element of a stack

// algorithm 1 -> use recursion to reach the middle of the stack and then pop the required element and then push back all the previously popped elements
// t.c -> O(n)
// s.c -> O(n) (due to recursion)

#include <bits/stdc++.h>
using namespace std;

void deleteMid(stack<int> &s, int sizeOfStack)
{
    if (s.size() == floor((sizeOfStack + 1) / 2))
    {
        s.pop();
        return;
    }
    int temp = s.top();
    s.pop();
    deleteMid(s, sizeOfStack);
    s.push(temp);
}

int main()
{

    return 0;
}