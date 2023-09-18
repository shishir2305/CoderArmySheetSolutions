// remove loop in linked list

// algorithm -> use floyd cycle detection algorithm to find the start of the head of the loop, now traverse again till curr->next!=loopHead and make curr->next=NULL
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

void removeLoop(Node *head)
{
    Node *slow = head, *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            slow = head;
            while (fast != slow)
            {
                slow = slow->next;
                fast = fast->next;
            }
            while (fast->next != slow)
            {
                fast = fast->next;
            }
            fast->next = NULL;
        }
    }
}

int main()
{

    return 0;
}