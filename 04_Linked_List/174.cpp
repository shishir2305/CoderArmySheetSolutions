// remove duplicate element from sorted linked list

// algorithm -> for each node traverse till the next node is equal to it and then change the next links
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

Node *removeDuplicates(Node *head)
{
    Node *curr = head;
    while (curr)
    {
        Node *temp = curr;
        while (curr && curr->data == temp->data)
        {
            curr = curr->next;
        }
        temp->next = curr;
    }
    return head;
}

int main()
{

    return 0;
}