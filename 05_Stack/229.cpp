// next greater element I

// algorithm 1 -> use brute force approach and check the entire nums2 array and
// get the required answer
// t.c -> O(n^2)
// s.c -> O(1)

// algorithm 2 -> we can use a stack to find next greater element on the right
// of every element and use a hashmap to store it, then we can traverse nums1
// one and store the answer
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> nums, unordered_map<int, int> &mp) {
  stack<int> st;
  vector<int> ans(nums.size());
  for (int i = nums.size() - 1; i >= 0; i--) {
    while (!st.empty() && st.top() <= nums[i]) {
      st.pop();
    }
    if (st.empty()) {
      ans[i] = -1;
      mp[nums[i]] = -1;
    } else {
      ans[i] = st.top();
      mp[nums[i]] = st.top();
    }
    st.push(nums[i]);
  }
  return ans;
}

vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2) {
  vector<int> ans;
  unordered_map<int, int> mp;
  vector<int> helper = solve(nums2, mp);
  for (int i = 0; i < nums1.size(); i++) {
    ans.push_back(mp[nums1[i]]);
  }
  return ans;
}

int main() { return 0; }