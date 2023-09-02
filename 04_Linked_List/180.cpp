// intersection of two sorted linked lists

// algorithm -> use the sorted property to check whether they are equal or not and store it in the answer else move ahead accordingly
// t.c -> O(m+n)
// s.c -> O(m+n)

#include <bits/stdc++.h>
using namespace std;

Node *findIntersection(Node *head1, Node *head2)
{
    Node *curr1 = head1, *curr2 = head2;
    Node *dummy = new Node(-1);
    Node *temp = dummy;
    while (curr1 && curr2)
    {
        if (curr1->data == curr2->data)
        {
            Node *tmp = new Node(curr1->data);
            temp->next = tmp;
            temp = temp->next;
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        else if (curr1->data < curr2->data)
        {
            curr1 = curr1->next;
        }
        else
        {
            curr2 = curr2->next;
        }
    }
    return dummy->next;
}

int main()
{

    return 0;
}