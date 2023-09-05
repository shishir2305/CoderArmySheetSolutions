// check if circular linked list

// algorithm -> traverse using do while loop and check until head or null is encountered
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

Node *curr = head;
do
{
    curr = curr->next;
} while (curr != head && curr != NULL);
return curr == head;

int main()
{

    return 0;
}