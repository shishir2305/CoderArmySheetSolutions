// linked list insertion

// algorithm -> insert at beginning - create new element and make its next pointer to the head
// insert at end - traverse through all the elements and at the end insert the new element

// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

Node *insertAtBegining(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

// Function to insert a node at the end of the linked list.
Node *insertAtEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        return temp;
    }
    if (head->next == NULL)
    {
        head->next = temp;
        return head;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}

int main()
{

    return 0;
}