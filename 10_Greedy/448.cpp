// minimum platforms

// algorithm -> we use a greedy approach and independently sort the the arrival
// and departure array. Now we two variables each one for arr and dep array and
// start traversing, we check if current arrival time is lesser than current
// departure then we increment the count and keep maximizing the answer else we
// decrease the count
// t.c -> O(n log(n))
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int findPlatform(int arr[], int dep[], int n) {
  sort(arr, arr + n);
  sort(dep, dep + n);
  int i = 0, j = 0, res = 0, curr = 0;
  while (i < n && j < n)

  {
    if (arr[i] <= dep[j]) {
      i++;
      curr++;
    } else {
      j++;
      curr--;
    }
    res = max(res, curr);
  }
  return res;
}
}
;

int main() { return 0; }