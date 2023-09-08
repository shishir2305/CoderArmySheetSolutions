// pairwise consecutive elements

// algorithm -> if the stack size is odd pop out an element, no while stack is not empty pop pop two elements and check whether their absolute difference is 1 or not
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

bool pairWiseConsecutive(stack<int> s)
{
    if (s.size() % 2 != 0)
    {
        s.pop();
    }
    while (!s.empty())
    {
        int element1 = s.top();
        s.pop();
        int element2 = s.top();
        s.pop();
        if (abs(element1 - element2) != 1)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    return 0;
}