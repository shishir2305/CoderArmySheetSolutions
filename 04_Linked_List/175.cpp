// delete without head pointer

// algorithm -> copy the data of the next element to the given element and make its next to its next element's next
// t.c -> O(1)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

void deleteNode(Node *del)
{
    struct Node *curr = del, *temp = curr->next;
    curr->data = temp->data;
    curr->next = temp->next;
}

int main()
{

    return 0;
}