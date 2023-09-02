// intersection of two linked lists

// algorithm -> use an unordered set to store the elements and then if they are present in second linked list then store them in the answer
// t.c -> O(m+n)
// s.c -> O(m);

#include <bits/stdc++.h>
using namespace std;

Node *findIntersection(Node *head1, Node *head2)
{
    unordered_set<int> s;
    Node *curr = head2;
    while (curr)
    {
        s.insert(curr->data);
        curr = curr->next;
    }
    curr = head1;
    Node *dummy = new Node(-1);
    Node *temp = dummy;
    while (curr)
    {
        if (s.find(curr->data) != s.end())
        {
            Node *tmp = new Node(curr->data);
            temp->next = tmp;
            temp = temp->next;
        }
        curr = curr->next;
    }
    return dummy->next;
}

int main()
{

    return 0;
}