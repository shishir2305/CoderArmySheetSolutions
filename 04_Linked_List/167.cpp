// find the sum of last n nodes of the linked list

// algorithm 1 -> reverse the linked list and find the sum
// t.c -> O(n)
// s.c -> O(1)

// algorithm 2 -> find the length of the linked list and them find sum for elements starting from (len-k)
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int sumOfLastN_Nodes(struct Node *head, int n)
{
    int ans = 0;
    Node *curr = head;
    int len = 0;
    while (curr)
    {
        len++;
        curr = curr->next;
    }
    int c = len - n;
    curr = head;
    while (c--)
    {
        curr = curr->next;
    }
    while (curr)
    {
        ans += curr->data;
        curr = curr->next;
    }
    return ans;
}

int main()
{

    return 0;
}