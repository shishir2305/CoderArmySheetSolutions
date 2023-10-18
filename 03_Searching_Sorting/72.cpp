// case-specific sorting of strings

// algorithm -> store lower and uppercase letters in a vector or string and then
// sort it, at last store the lower and uppercase letters in the string
// t.c -> O(n log(n))
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

string caseSort(string str, int n) {
  int count1 = 0, count2 = 0;
  string lower = "", upper = "";
  for (int i = 0; i < n; i++) {
    if (islower(str[i])) {
      lower += str[i];
    } else {
      upper += str[i];
    }
  }
  sort(lower.begin(), lower.end());
  sort(upper.begin(), upper.end());
  for (int i = 0; i < n; i++) {
    if (islower(str[i])) {
      str[i] = lower[count1++];
    } else {
      str[i] = upper[count2++];
    }
  }
  return str;
}

int main() { return 0; }