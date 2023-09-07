// rotate a linked list

// algorithm -> take two pointer both starting from head, and traverse till the end of list, now keep moving the first element (temp) to the last till k>0
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

Node *rotate(Node *head, int k)
{
    Node *last = head, *temp = head;
    if (head == NULL || k == 0)
    {
        return head;
    }
    while (last->next != NULL)
    {
        last = last->next;
    }
    while (k--)
    {
        head = head->next;
        temp->next = NULL;
        last->next = temp;
        last = temp;
        temp = head;
    }
    return head;
}

int main()
{

    return 0;
}