// sliding window maximum

// algorithm 1 -> use brute force approach of checking all the subarrays of size
// k and finding the required answer
// t.c -> O(n^2)
// s.c -> O(1)

// algorithm 2 -> we can optimize the solution by using some space to store the
// window of size k and storing only the elements that make up the required
// answer. If we encounter any greater number in the window then we should
// remove all the elements less than it as these elements are of no use. We can
// use a deque data structure to implement this algorithm.
// t.c -> O(n)
// s.c -> O(k)

#include <bits/stdc++.h>
using namespace std;

vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
  vector<int> ans;

  deque<int> dq;
  // processing first k elements
  for (int i = 0; i < k; i++) {
    while (!dq.empty() && arr[i] >= arr[dq.back()]) {
      dq.pop_back();
    }
    dq.push_back(i);
  }

  // processing for next n-k elements
  for (int i = k; i < n; i++) {
    ans.push_back(arr[dq.front()]);

    // making sure that the window size is maintained by removing old elements
    // out of the window
    while (!dq.empty() && dq.front() <= i - k) {
      dq.pop_front();
    }

    // placing new elements with the same logic of not using unnecessary
    // elements
    while (!dq.empty() && arr[i] >= arr[dq.back()]) {
      dq.pop_back();
    }

    dq.push_back(i);
  }

  ans.push_back(arr[dq.front()]);
  return ans;
}

int main() { return 0; }