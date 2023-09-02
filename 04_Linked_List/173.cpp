// reverse a linked list

// algorithm 1 -> use an array to store the array elements and then reverse it. At last store the elements of the reversed array to the linked list
// t.c -> O(n)
// s.c -> O(n)

// algorithm 2 -> we can optimize the space by changing links of the elements, we create three variable previous, current and forward and keep on changing the current's next link to prev and keep moving forward till the end
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

struct Node *reverseList(struct Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
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