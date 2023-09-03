// count pairs whose sum is equal to x

// algorithm -> use a unordered set to store the elements of first linked list, now find if there exists an element in the set which is equal to x-element of second linked list and increase the count
// t.c -> O(m+n)
// s.c -> O(m) since we sre only storing the elements of first linked list

#include <bits/stdc++.h>
using namespace std;

int countPairs(struct Node *head1, struct Node *head2, int x)
{
    int count = 0;
    unordered_set<int> s;
    Node *curr = head1;
    while (curr)
    {
        s.insert(curr->data);
        curr = curr->next;
    }
    curr = head2;
    while (curr)
    {
        if (s.find(x - curr->data) != s.end())
        {
            count++;
        }
        curr = curr->next;
    }
    return count;
}

int main()
{

    return 0;
}