// xor linked list

// algorithm -> simply insert at the head of the list and print normally
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

struct Node *insert(struct Node *head, int data)
{
    Node *temp = new Node(data);
    temp->npx = head;
    return temp;
}

vector<int> printList(struct Node *head)
{
    vector<int> ans;
    Node *curr = head;
    while (curr)
    {
        ans.push_back(curr->data);
        curr = curr->npx;
    }
    return ans;
}

int main()
{

    return 0;
}