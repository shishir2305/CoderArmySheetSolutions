// reverse alternate nodes in linked list

// algorithm -> at first make a dummy node and store the alternate elements in it separately and shorten the original list after reversing the dummy nodes append it to the back of originala list

#include <bits/stdc++.h>
using namespace std;

Node *reverse(Node *head)
{
    Node *curr = head, *prev = NULL;
    while (curr)
    {
        Node *forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

void rearrange(struct Node *head)
{
    Node *first = head;
    Node *sec = head->next;
    Node *store = head->next;

    while (first->next != NULL && sec->next != NULL)
    {

        first->next = first->next->next;
        first = first->next;

        sec->next = sec->next->next;
        sec = sec->next;
    }
    Node *ans = reverse(store);
    first->next = ans;
}

int main()
{

    return 0;
}