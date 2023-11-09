// mnimum number of coins

// algorithm -> we can use greedy approach and start with the maximum value
// coins to get the resultant
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

vector<int> minPartition(int N) {
  vector<int> ans;
  vector<int> coins = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
  int i = 0;
  while (N) {
    int div = N / coins[i];
    for (int j = 0; j < div; j++) {
      ans.push_back(coins[i]);
      N -= coins[i];
    }
    i++;
  }
  return ans;
}

int main() { return 0; }