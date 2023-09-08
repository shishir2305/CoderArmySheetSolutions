// implement stack using array

// algorithm -> at the time of push increase the top and put the element at that position, at the time of pop check whether arr is empty if not then pop the element

#include <bits/stdc++.h>
using namespace std;

class MyStack
{
private:
    int arr[1000];
    int top;

public:
    MyStack() { top = -1; }
    int pop();
    void push(int);
};

void MyStack ::push(int x)
{
    arr[++top] = x;
}

int MyStack ::pop()
{
    if (top == -1)
    {
        return -1;
    }
    int temp = arr[top];
    top--;
    return temp;
}

int main()
{

    return 0;
}