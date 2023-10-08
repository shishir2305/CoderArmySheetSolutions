// delete a node in single linked list

// algorithm -> reach upto the previous of the required node and mark its next
// to the next of the required element
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

Node *deleteNode(Node *head, int x) {
  if (x == 1) {
    return head->next;
  }
  Node *curr = head;
  int count = 1;
  while (count < x - 1) {
    curr = curr->next;
    count++;
  }
  curr->next = curr->next->next;
  return head;
}

int main() { return 0; }