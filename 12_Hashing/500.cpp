// first repeating element

// algorithm 1 -> use two for loops to check whether there is a repeated number
// t.c -> O(n^2)
// s.c -> O(1)

// algorithm 2 -> use a hashmap and store the frequency of every element and
// then traverse through the array again and check whether there is an element
// with frequency more than 1
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &A) {
  unordered_map<int, int> mp;
  for (int i = 0; i < A.size(); i++) {
    mp[A[i]]++;
  }
  for (int i = 0; i < A.size(); i++) {
    if (mp[A[i]] > 1) {
      return A[i];
    }
  }
  return -1;
}

int main() { return 0; }