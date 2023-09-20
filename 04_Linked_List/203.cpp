// remove all occurence of duplicates in a linked list

// algorithm 1 -> count the occurence of a node and if occurs only once then create a node with the same value and append it to a newly created list
// t.c -> O(n)
// s.c -> O(n)

// algorithm 2 -> count the occurences using a while loop and if it occurs only then move the prev else make prev->next to the curr element and start traversal from here
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

// approach 1
Node *removeAllDuplicates(struct Node *head)
{
    Node *dummy = new Node(-1);
    Node *temp = dummy;
    Node *curr = head;
    while (curr)
    {
        int count = 0;
        Node *temp1 = curr;
        while (temp1 && temp1->data == curr->data)
        {
            count++;
            temp1 = temp1->next;
        }
        if (count == 1)
        {
            Node *tmp = new Node(curr->data);
            temp->next = tmp;
            temp = tmp;
        }
        curr = temp1;
    }
    return dummy->next;
}

// optimized approach
Node *removeAllDuplicates(struct Node *head)
{
    if (!head)
        return head;

    Node *dummy = new Node(-1);
    dummy->next = head;
    Node *prev = dummy;
    Node *curr = head;

    while (curr)
    {
        int count = 0;
        Node *tempCurr = curr;

        // Count the number of nodes with the same data value
        while (tempCurr && tempCurr->data == curr->data)
        {
            tempCurr = tempCurr->next;
            count++;
        }

        // If count is greater than 1, skip the duplicate nodes
        if (count > 1)
        {
            prev->next = tempCurr;
        }
        else
        {
            prev = curr; // Move prev if no duplicates found
        }

        curr = tempCurr;
    }

    return dummy->next;
}

int main()
{

    return 0;
}