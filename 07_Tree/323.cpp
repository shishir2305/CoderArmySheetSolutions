// serialize and deserialize a binary tree

// algorithm -> use queue and whenever a null is encountered store -1 in its
// place and same while deserializing the array
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

vector<int> serialize(Node *root) {
  vector<int> ans;
  if (root == NULL)
    return ans;
  queue<Node *> q;
  q.push(root);
  while (!q.empty()) {
    int size = q.size();
    while (size-- > 0) {
      Node *front = q.front();
      q.pop();
      if (front) {
        if (front->left) {
          q.push(front->left);
        } else {
          q.push(NULL);
        }
        if (front->right) {
          q.push(front->right);
        } else {
          q.push(NULL);
        }
        ans.push_back(front->data);
      } else {
        ans.push_back(-1);
      }
    }
  }
}

// Function to deserialize a list and construct the tree.
Node *deSerialize(vector<int> &arr) {
  if (arr.size() == 0)
    return NULL;
  Node *root = new Node(arr[0]);
  queue<Node *> q;
  q.push(root);
  int i = 1;
  while (!q.empty()) {
    Node *front = q.front();
    q.pop();
    if (arr[i] == -1) {
      front->left = NULL;
      i++;
    } else {
      Node *temp = new Node(arr[i]);
      front->left = temp;
      q.push(temp);
      i++;
    }
    if (arr[i] == -1) {
      front->right = NULL;
      i++;
    } else {
      Node *temp = new Node(arr[i]);
      front->right = temp;
      q.push(temp);
      i++;
    }
  }
  return root;
}

int main() { return 0; }