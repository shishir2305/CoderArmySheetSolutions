// delete nodes having greater value on right (consider entire list)

// algorithm 1 -> use some space and build the required list
// t.c -> O(n)
// s.c -> O(n)

// algorithm 2 -> at first reverse the list, keep a max variable and two nodes, for every node check if it is greater than maxi then change maxi and store the answer else move ahead, at the end make curr->next=NULL and then reverse the head again
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

Node *reverse(Node *head)
{
    if (head == NULL)
        return NULL;
    Node *curr = head, *prev = NULL;
    while (curr)
    {
        Node *forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

int main()
{

    return 0;
}