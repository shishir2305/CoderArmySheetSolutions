// check if linked list is palindrome or not

// algorithm 1 -> use a vector to store the elements and then check palindrome or not
// t.c -> O(n)
// s.c -> O(n)

// algorithm 2 -> reverse the mid of the linked list and then compare the start and elements from mid of the linked list
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

Node *reverse(Node *head)
{
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

bool isPalindrome(Node *head)
{
    if (head == NULL)
        return true;
    Node *slow = head, *fast = head;
    while (fast->next && fast->next->next) // even length linked list is a problem so we have to handle it using this logic
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    Node *rev = reverse(slow->next);
    Node *curr = head;
    while (rev)
    {
        if (curr->data != rev->data)
        {
            return false;
        }
        curr = curr->next;
        rev = rev->next;
    }
    return true;
}

int main()
{

    return 0;
}