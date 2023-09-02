// reverse a doubly linked list

// algorithm -> keep traversing and keep changing the links, make the curr->next to prev and make prev current->next
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

Node *reverseDLL(Node *head)
{
    Node *curr = head, *prev = NULL;
    while (curr)
    {
        Node *forward = curr->next;
        curr->next = prev;
        curr->prev = forward;
        prev = curr;
        curr = forward;
    }
    return prev;
}

int main()
{

    return 0;
}