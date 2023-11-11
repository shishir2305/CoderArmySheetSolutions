// elements in the range

// algorithm -> use set to store distinct elements in the range, then sum all
// the elements both in the range and elements of the set then compare both the
// sums
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

bool check_elements(int arr[], int n, int A, int B) {
  unordered_set<int> st;
  int sum1 = 0, sum2 = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] >= A && arr[i] <= B) {
      st.insert(arr[i]);
    }
  }
  for (int i = A; i <= B; i++) {
    sum2 += i;
  }
  for (auto it : st) {
    sum1 += it;
  }
  return sum1 == sum2;
}

int main() { return 0; }