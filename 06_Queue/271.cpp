// circular tour

// algorithm -> from very start we keep calculating the deficit i.e. petrol is
// less and distance is more at the end we have a starting index and some
// balance petrol, we simply check whether summation of deficit and balance
// yield a positive value or not
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int tour(petrolPump p[], int n) {
  int deficit = 0, balance = 0, start = 0;
  for (int i = 0; i < n; i++) {
    balance += p[i].petrol - p[i].distance;
    if (balance < 0) {
      deficit += balance;
      balance = 0;
      start = i + 1;
    }
  }
  if (deficit + balance >= 0) {
    return start;
  }
  return -1;
}

int main() { return 0; }