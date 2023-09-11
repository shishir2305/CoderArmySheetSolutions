// queue using two stacks

// algorithm -> push element in s1 simpley, while popping at first pop all the elements of s1 and push it to s2 then store s2.top() as result then pop s2.top() and then will s2 is not empty keep popping and storing back the elements in s1
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

void StackQueue ::push(int x)
{
    s1.push(x);
}

// Function to pop an element from queue by using 2 stacks.
int StackQueue ::pop()
{
    int temp = -1;
    while (!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }
    if (!s2.empty())
    {
        temp = s2.top();
        s2.pop();
    }
    while (!s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
    }
    return temp;
}

int main()
{

    return 0;
}