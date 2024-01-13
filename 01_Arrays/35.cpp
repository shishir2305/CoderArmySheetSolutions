// maximum product triplet

// algorithm 1 -> use three for loops to check all the combinations and find the
// maximum product t.c -> O(n^3) s.c -> O(1)

// algorithm 2 -> sort the array, now mathematically there can be 2 combinations
// to get the maximum product - (smallestElement * secondSmallestElement *
// greatestElement) in case we need to use 2 negative elements or
// (largestElement * secondLargestElement * thirdLargestElement)
// t.c -> O(n log(n))
// s.c -> O(1)

// algorithm 3 -> find 3 mmaximum elements and 2 minimum elements now use the
// previous combination to find the result
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

// using sorting
int maximumProduct(vector<int> &arr) {
  int n = arr.size();
  sort(arr.begin(), arr.end());
  long long temp1 = arr[0] * arr[1] * arr[n - 1];
  long long temp2 = arr[n - 1] * arr[n - 2] * arr[n - 3];
  return max(temp1, temp2);
}

// optimized approach
int maximumProduct(vector<int> &arr) {
  int n = arr.size();
  if (n < 3) {
    return -1;
  }
  long long maxA = INT_MIN, maxB = INT_MIN, maxC = INT_MIN;
  long long minA = INT_MAX, minB = INT_MAX;

  for (int i = 0; i < n; i++) {
    if (arr[i] > maxA) {
      maxC = maxB;
      maxB = maxA;
      maxA = arr[i];
    } else if (arr[i] > maxB) {
      maxC = maxB;
      maxB = arr[i];
    } else if (arr[i] > maxC) {
      maxC = arr[i];
    }

    if (arr[i] < minA) {
      minB = minA;
      minA = arr[i];
    } else if (arr[i] < minB) {
      minB = arr[i];
    }
  }

  long long res1 = maxA * maxB * maxC;
  long long res2 = minA * minB * maxA;

  return max(res1, res2);
}

int main() { return 0; }
