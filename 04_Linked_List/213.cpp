// reverse nodes in k-group

// algorithm 1 -> use recursion to reverse once and then let it do the entire work
// t.c -> o(n)
// s.c -> O(n)

// algorithm 2 -> reverse using iterative approach
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

// recursive approach
int getLength(ListNode *head)
{
    if (head == NULL)
    {
        return 0;
    }
    int count = 0;
    ListNode *curr = head;
    while (curr != NULL)
    {
        count++;
        curr = curr->next;
    }
    return count;
}

ListNode *reverse(ListNode *head, int k, int length)
{
    if (length < k)
    {
        return head;
    }
    int count = 0;
    ListNode *curr = head, *nex = NULL, *prev = NULL;
    while (count < k && curr != NULL)
    {
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
        count++;
    }
    if (nex != NULL)
    {
        head->next = reverse(nex, k, length - k);
    }
    return prev;
}

ListNode *reverseKGroup(ListNode *head, int k)
{
    if (head == NULL)
    {
        return NULL;
    }
    int length = getLength(head);
    return reverse(head, k, length);
}

// iterative approach
ListNode *reverseKGroup(ListNode *head, int k)
{
    if (head == NULL || k == 1)
    {
        return head;
    }
    ListNode *dummy = new ListNode(-1);
    dummy->next = head;
    ListNode *curr = head, *pre = dummy, *next = dummy;
    int count = 0;
    while (curr)
    {
        curr = curr->next;
        count++;
    }
    curr = head;
    while (count >= k)
    {
        curr = pre->next;
        next = curr->next;
        for (int i = 1; i < k; i++)
        {
            curr->next = next->next; // changing the sequence of nodes
            next->next = pre->next;
            pre->next = next;
            next = curr->next;
        }
        pre = curr;
        count -= k;
    }
    return dummy->next;
}

int main()
{

    return 0;
}