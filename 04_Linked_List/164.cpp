// delete node in doubly linked list

// algorithm -> traverse till the required node by decrementing the given index
// till it reaches 0, then check whether the current node is head or is it the
// last node then handle them separately
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

Node *deleteNode(Node *head, int x) {
  Node *curr = head;
  while (--x) {
    curr = curr->next;
  }
  if (curr == head) {
    head = curr->next;
    head->prev = NULL;
    delete curr;
  } else if (curr->next == NULL) {
    curr->prev->next = NULL;
    delete curr;
  } else {
    curr->next->prev = curr->prev;
    curr->prev->next = curr->next;
    delete curr;
  }
  return head;
}

int main() { return 0; }