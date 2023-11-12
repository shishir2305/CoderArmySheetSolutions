// find minimum number of laptops required

// algorithm -> at a point we need to find the maximum number of laptops
// required, sort both the arrays and increase the count if start is less than
// end time and decrease when vice versa
// t.c -> O(n log(n))
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int minLaptops(int n, int start[], int end[]) {
  sort(start, start + n);
  sort(end, end + n);
  int i = 0, j = 0, res = 0, count = 0;
  while (i < n && j < n) {
    if (start[i] < end[j]) {
      i++;
      count++;
    } else {
      j++;
      count--;
    }
    res = max(count, res);
  }
  return res;
}

int main() { return 0; }