// remove duplicates from an unsorted linked list

// algorithm 1 -> use an unsorted set and store unique elements and then an
// element is present then simply remove the element else store the element in
// the result as well as in the set
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

Node *removeDuplicates(Node *head) {
  unordered_set<int> st;
  Node *dummy = new Node(-1);
  dummy->next = head;
  Node *curr = head;
  Node *prev = dummy;
  while (curr) {
    if (st.find(curr->data) != st.end()) {
      prev->next = curr->next;
      delete (curr);
    } else {
      st.insert(curr->data);
      prev = curr;
    }
    curr = prev->next;
  }
  return dummy->next;
}

int main() { return 0; }