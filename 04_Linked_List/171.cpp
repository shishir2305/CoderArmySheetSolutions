// nth node from end of linked list

// algorithm -> count nodes of the linked list and then traverse till you reach
// count-nth node, if the count is less than n then simply return -1
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int getNthFromLast(Node *head, int n) {
  Node *curr = head;
  int count = 0;
  while (curr) {
    count++;
    curr = curr->next;
  }
  if (n > count) {
    return -1;
  }
  curr = head;
  count -= n;
  while (count) {
    curr = curr->next;
    count--;
  }
  return curr->data;
}

int main() { return 0; }