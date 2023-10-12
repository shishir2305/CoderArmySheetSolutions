// union of two arrays

// algorithm -> use unordered set to store the elements in a distinct manner and
// at last the return its size
// t.c -> O(n+m)
// s.c -> O(n+m)

#include <bits/stdc++.h>
using namespace std;

int doUnion(int a[], int n, int b[], int m) {
  unordered_set<int> s;
  for (int i = 0; i < n; i++) {
    s.insert(a[i]);
  }
  for (int i = 0; i < m; i++) {
    s.insert(b[i]);
  }
  return s.size();
}

int main() { return 0; }