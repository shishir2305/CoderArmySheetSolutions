// find length of loop

// algorithm 1 -> use hashset to keep track of the visited nodes and use it to find the length of the loop
// t.c -> O(n)
// s.c -> O(n)

// algorithm 2 -> use slow and fast pointer to find the loop now move fast by one till slow!=fast
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int countNodesinLoop(struct Node *head)
{
    Node *slow = head, *fast = head;
    bool loopPresent = false;
    int count = 0;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            loopPresent = true;
            break;
        }
    }
    if (loopPresent)
    {
        do
        {
            count++;
            fast = fast->next;
        } while (slow != fast);
    }
    return count;
}

int main()
{

    return 0;
}