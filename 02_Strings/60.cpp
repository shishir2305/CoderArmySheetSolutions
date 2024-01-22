// roman number to integer

// algorithm -> use an unordered map to store the value of the roman numbers and
// their corresponding integers, now if the current roman's corresponding is
// greater than the previous one then simply subtract twice the previous value
// I can be placed before V (5) and X (10) to make 4 and 9.
// X can be placed before L (50) and C (100) to make 40 and 90.
// C can be placed before D (500) and M (1000) to make 400 and 900.
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int romanToDecimal(const string &str) {
  unordered_map<char, int> mp{{'I', 1},   {'V', 5},   {'X', 10},  {'L', 50},
                              {'C', 100}, {'D', 500}, {'M', 1000}};

  int ans = 0;
  int n = str.size();

  for (int i = 0; i < n; i++) {
    if (i > 0 && mp[str[i]] > mp[str[i - 1]]) {
      ans +=
          mp[str[i]] - 2 * mp[str[i - 1]]; // Subtract twice the previous value
    } else {
      ans += mp[str[i]];
    }
  }

  return ans;
}

int main() { return 0; }