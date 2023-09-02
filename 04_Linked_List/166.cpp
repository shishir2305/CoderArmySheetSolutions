// delete alternate nodes

// algorithm -> traverse the array and keep tract of the curr->next->next and delete elements accordingly
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

void deleteAlt(struct Node *head)
{
    struct Node *curr = head;
    while (curr && curr->next)
    {
        if (curr->next->next)
        {
            curr->next = curr->next->next;
        }
        else
        {
            curr->next = NULL;
        }
        curr = curr->next;
    }
}

int main()
{

    return 0;
}