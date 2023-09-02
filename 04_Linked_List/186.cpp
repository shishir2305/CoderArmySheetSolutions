// union of two linked lists

// algorithm -> use a set to store all the unique elements in a sorted order and then store all its element in the result list
// t.c -> O((n+m)*log(n+m))
// s.c -> O(n+m)

#include <bits/stdc++.h>
using namespace std;

struct Node *makeUnion(struct Node *head1, struct Node *head2)
{
    set<int> s;
    Node *curr = head1;
    while (curr)
    {
        s.insert(curr->data);
        curr = curr->next;
    }
    curr = head2;
    while (curr)
    {
        s.insert(curr->data);
        curr = curr->next;
    }
    Node *dummy = new Node(-1);
    Node *temp = dummy;
    for (auto it : s)
    {
        Node *tmp = new Node(it);
        temp->next = tmp;
        temp = temp->next;
    }
    return dummy->next;
}
}
;

int main()
{

    return 0;
}