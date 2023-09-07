// sorted insert for circular linked list

// algorithm -> use two pointer one starting from head and other from head->next, traverse and insert in between these two
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

Node *sortedInsert(Node *head, int data)
{
    Node *temp = new Node(data);
    if (data < head->data)
    {
        Node *curr = head;
        while (curr->next != head)
        {
            curr = curr->next;
        }
        curr->next = temp;
        temp->next = head;
        return temp;
    }
    Node *curr1 = head, *curr2 = head->next;
    while (curr2->next != head && curr2->data < data)
    {
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    curr1->next = temp;
    temp->next = curr2;
    return head;
}

int main()
{

    return 0;
}