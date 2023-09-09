// detect loop in linked list

// algorithm 1 -> traverse the elements of the linked list and check whether curr->data==-1 if yes then return true else make curr->data=-1 and move forward
// t.c -> O(n)
// s.c -> O(1)

// algorithm 2-> use the concept of slow and fast pointer (floyd cycle detection algorithm)
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

bool detectLoop1(Node *head)
{
    Node *curr = head;
    while (curr)
    {
        if (curr->data == -1)
        {
            return true;
        }
        curr->data = -1;
        curr = curr->next;
    }
    return false;
}

// optimized approach
bool detectLoop2(Node *head)
{
    Node *slow = head, *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}

int main()
{

    return 0;
}