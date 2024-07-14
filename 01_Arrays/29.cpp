// pythagorean triplet

// algorithm 1 -> use an unordered set to store the squares of the numbers and
// then use the same to search for (a2+b2=c2)
// t.c -> O(n*n)
// s.c -> O(n)

// algorithm 2 (optimized) -> use a frequency array to store the frequency of
// elements and also find a maximum element. Now use two loops from 1 to maximum
// + 1 to find the required element
// t.c -> O(n+max(arr[i])^2)
// s.c -> O(max(arr[i]))

#include <bits/stdc++.h>
using namespace std;

// brute force
bool checkTriplet(int arr[], int n) {
  unordered_set<int> st;
  for (int i = 0; i < n; i++) {
    st.insert(arr[i] * arr[i]);
  }
  for (auto i : st) {
    for (auto j : st) {
      if (st.find(i + j) != st.end()) {
        return true;
      }
    }
  }
  return false;
}

// optimized approach
bool checkTriplet(int arr[], int n) {
  int maximum = 0;

  // Find the maximum element
  for (int i = 0; i < n; i++) {
    maximum = max(maximum, arr[i]);
  }

  // Hashing array
  vector<int> hash(maximum + 1, 0);

  // Increase the count of array elements
  // in hash table
  for (int i = 0; i < n; i++)
    hash[arr[i]]++;

  // Iterate for all possible a
  for (int i = 1; i < maximum + 1; i++) {

    // If a is not there
    if (hash[i] == 0)
      continue;

    // Iterate for all possible b
    for (int j = 1; j < maximum + 1; j++) {

      // If a and b are same and there is only one a
      // or if there is no b in original array
      if ((i == j && hash[i] == 1) || hash[j] == 0)
        continue;

      // Find c
      int val = sqrt(i * i + j * j);

      // If c^2 is not a perfect square
      if ((val * val) != (i * i + j * j))
        continue;

      // If c exceeds the maximum value
      if (val > maximum)
        continue;

      // If there exists c in the original array,
      // we have the triplet
      if (hash[val]) {
        return true;
      }
    }
  }
  return false;
}

int main() { return 0; }