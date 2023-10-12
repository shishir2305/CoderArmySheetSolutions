// first element to occur k times

// algorithm -> use a hashmap to store the frequency of elements and then return
// the required element accordingly
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

int firstElementKTime(int arr[], int n, int k) {
  unordered_map<int, int> mp;
  for (int i = 0; i < n; i++) {
    mp[arr[i]]++;
    if (mp[arr[i]] == k) {
      return arr[i];
    }
  }
  return -1;
}

int main() { return 0; }