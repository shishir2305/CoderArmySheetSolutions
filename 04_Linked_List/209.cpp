// clone a linked list with next and random pointers

// algorithm 1 -> use hashmap to store the elements as key and new nodes as values, now again traverse the linked list and mark the random pointers
// t.c -> O(n)
// s.c -> O(n)

// algorithm 2 -> use pointers reference to create dummy nodes and place them to the next right of the curr nodes, now clone the linked list linked list
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

// hashmap approach
Node *copyList(Node *head)
{
    unordered_map<Node *, Node *> mp;
    Node *curr = head;
    while (curr)
    {
        mp[curr] = new Node(curr->data);
        curr = curr->next;
    }
    curr = head;
    while (curr)
    {
        Node *currNode = mp[curr];
        currNode->next = mp[curr->next];
        currNode->arb = mp[curr->arb];
        curr = curr->next;
    }
    Node *head2 = mp[head];
    return head2;
}

// optimized approach
Node *copyList2(Node *head)
{
    Node *curr = head;
    while (curr)
    {
        Node *temp = new Node(curr->data); // creating new nodes and inserting them into the list
        temp->next = curr->next;
        curr->next = temp;
        curr = temp->next;
    }
    curr = head;
    while (curr)
    {
        curr->next->arb = (curr->arb) ? curr->arb->next : NULL; // cloning the random pointers
        curr = curr->next->next;
    }
    Node *original = head, *copy = head->next;
    curr = copy;
    while (original && copy) // restoring the original list and segregating the cloned list
    {
        original->next =
            original->next ? original->next->next : original->next;

        copy->next = copy->next ? copy->next->next : copy->next;
        original = original->next;
        copy = copy->next;
    }
    return curr;
}

int main()
{

    return 0;
}