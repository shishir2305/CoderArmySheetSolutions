// insert in middle of a linked list

// algorithm -> use the concept of slow and fast pointer to reach the middle
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

Node *insertInMiddle(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head->next == NULL)
    {
        head->next = temp;
        temp->next = NULL;
        return head;
    }
    Node *slow = head, *fast = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next;
        fast = fast->next;
    }
    temp->next = slow->next;
    slow->next = temp;
    return head;
}

int main()
{

    return 0;
}