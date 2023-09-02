// move last element to front of a linked list

// algorithm -> traverse till the end of the linked list and store the last element in a variable and at the end simply make the next of that stored element as head
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

ListNode *moveToFront(ListNode *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
        return head;
    ListNode *curr = head, *temp = NULL;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    temp = curr->next;
    curr->next = NULL;
    temp->next = head;
    return temp;
}

int main()
{

    return 0;
}