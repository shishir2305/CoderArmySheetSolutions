// find n/kth node in linked list

// algorithm -> find the size of the linked list then simply find the ceil value
// of the fraction of n/k and then traverse till that node
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int fractional_node(struct Node *head, int k) {
  int count = 0;
  Node *curr = head;
  while (curr) {
    count++;
    curr = curr->next;
  }
  int index = 0;
  if (count % k == 0) {
    index = count / k;
  } else {
    index = (count / k) + 1;
  }
  curr = head;
  while (--index) {
    curr = curr->next;
  }
  return curr->data;
}

int main() { return 0; }