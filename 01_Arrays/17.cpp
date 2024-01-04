// subarray with given sum

// algorithm 1 -> using hashmap and prefix sum
// t.c -> O(n)
// s.c. -> O(n)

// algorithm 2 ->The idea is simple as we know that all the elements in subarray
// are positive so, If a subarray has sum greater than the given sum then there
// is no possibility that adding elements to the current subarray will be equal
// to the given sum. So the Idea is to use a similar approach to a sliding
// window. Start with an empty subarray add elements to the subarray until the
// sum is less than x( given sum ). If the sum is greater than x, remove
// elements from the start of the current subarray.
// t.c -> O(n)
// s.c. -> O(1)

#include <bits/stdc++.h>
using namespace std;

// using hashmap
vector<int> subarraySum1(vector<int> arr, int n, long long s) {
  vector<int> ans;
  long long sum = 0;
  unordered_map<long long, long long> mp;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
    if (sum == s) {
      ans.push_back(1);
      ans.push_back(i + 1);
      return ans;
    }
    int reqSum = sum - s;
    if (mp.find(reqSum) != mp.end()) {
      int start = mp[reqSum] + 2;
      int end = i + 1;
      ans.push_back(start);
      ans.push_back(end);
      return ans;
    }
    mp[sum] = i;
  }
  ans.push_back(-1);
  return ans;
}

// optimized approach (sliding window)
vector<int> subarraySum(vector<int> arr, int n, long long s) {
  vector<int> ans;
  int start = 0;
  int last = 0;
  long long currSum = 0;

  for (int i = 0; i < n; i++) {
    currSum += arr[i];
    if (currSum >= s) {
      last = i;
      while (currSum > s && start < last) {
        currSum -= arr[start];
        ++start;
      }
      if (currSum == s) {
        ans.push_back(start + 1);
        ans.push_back(last + 1);
        return ans;
      }
    }
  }
  return {-1};
}

int main() {
  vector<int> arr = {1, 2, 3, 7, 5};
  int n = 5;
  long long s = 12;
  return 0;
}