// given a linked list of 0s, 1s and 2s, sort it

// algorithm 1 -> use an array to store the array elements and then Dutch National Flag algorithm to sort the array
// t.c -> O(n)
// s.c -> O(n)

// algorithm 2 -> count the number of 0s, 1s and 2s and then store it according to the count in the linked list
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

Node *segregate(Node *head)
{

    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            zeroCount++;
        }
        else if (temp->data == 1)
        {
            oneCount++;
        }
        else if (temp->data == 2)
        {
            twoCount++;
        }
        temp = temp->next;
    }

    temp = head;
    while (temp != NULL)
    {
        if (zeroCount != 0)
        {
            temp->data = 0;
            zeroCount--;
        }
        else if (oneCount != 0)
        {
            temp->data = 1;
            oneCount--;
        }
        else if (twoCount != 0)
        {
            temp->data = 2;
            twoCount--;
        }
        temp = temp->next;
    }
    return head;
}

int main()
{

    return 0;
}