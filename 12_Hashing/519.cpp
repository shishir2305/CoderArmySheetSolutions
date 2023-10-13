// nuts and bolts problem

// algorithm -> simply sort both the arrays
// t.c -> O(n log(n))
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

void matchPairs(char nuts[], char bolts[], int n) {
  sort(nuts, nuts + n);
  sort(bolts, bolts + n);
}

int main() { return 0; }