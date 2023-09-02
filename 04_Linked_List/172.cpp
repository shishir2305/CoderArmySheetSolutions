// finding middle element in a linked list

// algorithm 1 -> we can count the number of nodes and based on that we can again traverse to the middle node using the count
// t.c -> O(n) (but we have to traverse two times)
// s.c -> O(1)

// algorithm 2 -> we can optimize the approach by using the concept of slow and fast pointer. Both the pointer start from the head initially, the slow pointer moves one element at a time but the fast pointer moves two elements at a time, when the fast pointer reaches the end it is observed that the slow pointer is at the required position
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int getMiddle(Node *head)
{
    Node *slow = head, *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next;
        if (fast->next)
        {
            fast = fast->next;
        }
    }
    return slow->data;
}

int main()
{

    return 0;
}