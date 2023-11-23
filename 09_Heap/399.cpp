// merge two binary max heaps

// algorithm -> store all the elements of a and b, at last run the heapify
// algorithm for all the elements of the resultant array
// t.c -> O(n log(n))
// s.c -> O(n+m)

#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int> &arr, int n, int i) {
  int largest = i;
  int leftChild = 2 * i + 1;
  int rightChild = 2 * i + 2;

  if (leftChild < n && arr[largest] < arr[leftChild]) {
    largest = leftChild;
  }
  if (rightChild < n && arr[largest] < arr[rightChild]) {
    largest = rightChild;
  }
  if (i != largest) {
    swap(arr[i], arr[largest]);
    heapify(arr, n, largest);
  }
}

vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
  vector<int> ans;
  for (auto it : a) {
    ans.push_back(it);
  }
  for (auto it : b) {
    ans.push_back(it);
  }
  for (int i = ans.size() / 2 - 1; i >= 0; i--) {
    heapify(ans, ans.size(), i);
  }
  return ans;
}

int main() { return 0; }