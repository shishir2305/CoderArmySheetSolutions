// identical linked lists

// algorithm -> traverse both the linked lists at once and if there is a mismatch then return false else true
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

bool areIdentical(struct Node *head1, struct Node *head2)
{
    Node *curr1 = head1, *curr2 = head2;
    while (curr1 != NULL || curr2 != NULL)
    {
        if (curr1 == NULL && curr2 != NULL)
        {
            return false;
        }
        if (curr1 != NULL && curr2 == NULL)
        {
            return false;
        }
        if (curr1->data != curr2->data)
        {
            return false;
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    return true;
}

int main()
{

    return 0;
}