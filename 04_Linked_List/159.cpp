// count nodes of linked list

// algorithm -> traverse every element of linked list and keep increasing the count
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int getCount(struct Node *head)
{

    Node *curr = head;
    int count = 0;
    while (curr != NULL)
    {
        count++;
        curr = curr->next;
    }
    return count;
}

int main()
{

    return 0;
}