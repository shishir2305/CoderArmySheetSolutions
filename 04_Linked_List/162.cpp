// insert in a sorted list

// algorithm -> traverse till there is an element that is greater than the provided data and then insert it there
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

Node *sortedInsert(struct Node *head, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
        return temp;
    if (data <= head->data)
    {
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    while (curr->next != NULL && curr->next->data < data)
    {
        curr = curr->next;
    }
    if (curr->next == NULL)
    {
        curr->next = temp;
        return head;
    }

    temp->next = curr->next;
    curr->next = temp;
    return head;
}

int main()
{

    return 0;
}