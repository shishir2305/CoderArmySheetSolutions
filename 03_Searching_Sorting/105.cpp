// two repeated elements

// algorithm 1 -> use a frequency array or hashmap to find the elements
// t.c -> O(n)
// s.c -> O(n)

// algorithm 2 -> use array elements as indexes and make the corresponding index
// as negation of the array element, or store them if they are already the
// negation of the corresponding index
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

vector<int> twoRepeated(int arr[], int n) {
  vector<int> ans;
  for (int i = 0; i < n + 2; i++) {
    int index = abs(arr[i]);
    if (arr[index] < 0) {
      ans.push_back(abs(arr[i]));
    } else {
      arr[index] = -arr[index];
    }
  }
  return ans;
}

int main() { return 0; }