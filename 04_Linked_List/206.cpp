// linked list cycle II

// algorithm -> use floyd cycle detection algorithm to find the loop if loop is present then place slow to head and now move both slow and fast by one step till they meet
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

ListNode *detectCycle(ListNode *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    ListNode *slow = head, *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            break;
        }
    }
    if (!fast || !fast->next) // check whether loop is present or not
    {
        return NULL;
    }
    slow = head;
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return fast;
}

int main()
{

    return 0;
}