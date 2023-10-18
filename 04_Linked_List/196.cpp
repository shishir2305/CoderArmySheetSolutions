// rearrange a linked list

// allgorithm 1 -> use some space and segregate odd and even and then traverse
// the linked list the set the elements accordingly
// t.c -> O(n)
// s.c -> O(n)

// algorithm 2 -> use two dummy nodes and store odd and even nodes in them at
// the end join the end of odd nodes with the starting of even nodes
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

void rearrangeEvenOdd(Node *head) {
  if (head == NULL || head->next == NULL)
    return;
  Node *odd = head;
  Node *oddCurr = odd;
  Node *even = head->next;
  Node *evenCurr = even;
  Node *curr = even->next;
  int count = 3;
  while (curr) {
    if (count % 2 != 0) {
      oddCurr->next = curr;
      oddCurr = oddCurr->next;
    } else {
      evenCurr->next = curr;
      evenCurr = evenCurr->next;
    }
    curr = curr->next;
    count++;
  }
  oddCurr->next = even;
  evenCurr->next = NULL;
}

int main() { return 0; }
