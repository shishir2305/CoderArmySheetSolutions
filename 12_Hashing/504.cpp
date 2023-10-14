// diffk II

// algorithm -> we can use an unordered set to store elements and find either of
// two elements (A[i]-B) or (A[i]+B), since we have the equation A[i]-A[j]=B so
// we can derive these results from these equations
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

bool diffPossible(const vector<int> &A, int B) {
  unordered_set<int> st;
  for (int i = 0; i < A.size(); i++) {
    if (st.find(A[i] - B) != st.end() || st.find(A[i] + B) != st.end()) {
      return true;
    }
    st.insert(A[i]);
  }
  return false;
}

int main() { return 0; }