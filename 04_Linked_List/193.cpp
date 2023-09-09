// merge two sorted linked lists

// algorithm 1 -> use a vector and store elements in it and then sort it and store back the answers in the linked list
// t.c -> O(n log(n))
// s.c -> O(n)

// algorithm 2 -> sorted insert in the linked list by comparing both elements
// t.c -> O(n)
// s.c ->(1)

#include <bits/stdc++.h>
using namespace std;

Node *sortedMerge(Node *head1, Node *head2)
{
    Node *dummy = new Node(-1); // to store the reference
    Node *temp = dummy;
    while (head1 && head2)
    {
        if (head1->data <= head2->data)
        {
            temp->next = head1;
            head1 = head1->next;
        }
        else
        {
            temp->next = head2;
            head2 = head2->next;
        }
        temp = temp->next;
    }
    while (head1)
    {
        temp->next = head1;
        temp = temp->next;
        head1 = head1->next;
    }
    while (head2)
    {
        temp->next = head2;
        temp = temp->next;
        head2 = head2->next;
    }
    return dummy->next;
}

int main()
{

    return 0;
}