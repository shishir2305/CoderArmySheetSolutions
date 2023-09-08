// implement stack using linked list

#include <bits/stdc++.h>
using namespace std;

void MyStack ::push(int x)
{
    StackNode *temp = new StackNode(x);
    temp->next = top;
    top = temp;
}

// Function to remove an item from top of the stack.
int MyStack ::pop()
{
    if (top == NULL)
        return -1;
    StackNode *temp = top;
    top = top->next;
    int ans = temp->data;
    free(temp);
    return ans;
}

int main()
{

    return 0;
}