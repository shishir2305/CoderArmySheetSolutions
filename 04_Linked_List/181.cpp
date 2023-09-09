// pairwise swap elements of a linked list

// algorithm -> at first create a dummy node to save the reference of the head pointer and make its next to head, now with the help of prev and curr do the pairwise swapping by changing the links
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

Node *pairWiseSwap(struct Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *dummy = new Node(-1);
    dummy->next = head;
    Node *curr = head, *prev = dummy;
    while (curr && curr->next)
    {
        Node *temp = curr->next;
        curr->next = curr->next->next;
        prev->next = temp;
        temp->next = curr;
        prev = curr;
        curr = curr->next;
    }
    return dummy->next;
}

int main()
{

    return 0;
}