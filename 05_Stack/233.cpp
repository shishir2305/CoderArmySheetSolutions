// get minimum element from stack

// algorithm 1 -> use some space to keep track of the minimum element so far
// t.c -> O(1)
// s.c -> O(n)

class Solution {
  int min;
  stack<int> s;

public:
  int getMin() {
    if (s.empty())
      return -1;
    return min;
  }

  int pop() {
    if (s.empty())
      return -1;
    else if (s.top() > min) {
      int res = s.top();
      s.pop();
      return res;
    } else {
      int res = min;
      min = 2 * min - s.top();
      s.pop();
      return res;
    }
  }

  void push(int x) {
    if (s.empty()) {
      min = x;
      s.push(x);
    } else if (x <= min) {
      s.push(2 * x - min);
      min = x;
    } else
      s.push(x);
  }
};