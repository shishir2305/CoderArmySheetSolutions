// 2 sum

// algorithm 1 -> use sorting along with two pointer approach and check whether
// the current sum is equal, greater or smaller and move accordingly
// t.c -> O(n log(n))
// s.c -> O(1)

// algorithm 2 -> use the concept of hashing and keep checking if target-arr[i]
// is present in the hashmap or not. If not present then add
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &arr, int x) {
  unordered_map<int, int> myMap;
  for (int i = 0; i < arr.size(); i++) {
    if (myMap.find(x - arr[i]) != myMap.end()) {
      return {myMap[x - arr[i]], i};
    }
    if (myMap.find(arr[i]) == myMap.end()) {
      myMap[arr[i]] = i;
    }
  }
  return {-1, -1};
}

int main() { return 0; }