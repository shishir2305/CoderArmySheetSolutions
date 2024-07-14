// minimum number of k consecutive bit flips

// algorithm 1 -> start from the element that is 0 and flip all the elements
// lying in the window, return -1 if the element is 0 and forming window is not
// possible
// t.c -> O(nk)
// s.c -> O(1)

// algorithm 2 -> we can take an auxiliary array, when we encounter 0 we choose
// the window and flip the bits of the element lying in it by increasing the
// corresponsing auxiliary array element. The auxiliary array denotes the number
// of times a number is flipped and based on that we can identify whether the
// number becomes 1 or not after flips.
// t.c -> O(nk)
// s.c -> O(n)

// algorithm 3 -> we can optimize the previous algorithm by using a queue and
// adding the window's last element index in the queue, and based on the queue
// size we can identify how many times a number will be flipped.
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

// brute force approach
int solve(vector<int> &nums) {
  int flips = 0;

  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] == 0) {
      if (i + k - 1 >= nums.size()) {
        return -1;
      }
      for (int j = i; j <= i + k - 1; j++) {
        nums[j] = !nums[j];
      }
      flips++;
    }
  }
  return flips;
}

// optimized approach
int minKBitFlips(vector<int> &nums, int k) {
  int flips = 0;
  queue<int> q;

  for (int i = 0; i < nums.size(); i++) {
    if (!q.empty() && q.front() < i) {
      q.pop();
    }

    if (nums[i] == 0 && q.size() % 2 == nums[i]) {
      if (i + k - 1 >= nums.size()) {
        return -1;
      }

      q.push(i + k - 1);
      flips++;
    } else if (nums[i] == 1 && q.size() % 2 == nums[i]) {
      if (i + k - 1 >= nums.size()) {
        return -1;
      }
      q.push(i + k - 1);
      flips++;
    }
  }
  return flips;
}

int main() { return 0; }