// find maximum equal sum of three stacks

// algorithm -> store the sum of all three arrays in separate elements at each
// iteration check whether they are equal or not, if they are not equal then
// from the sum decrease the current element of the array till it is the smaller
// than other two
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int maxEqualSum(int N1, int N2, int N3, vector<int> &S1, vector<int> &S2,
                vector<int> &S3) {
  int sum1 = 0, sum2 = 0, sum3 = 0;
  for (auto i : S1)
    sum1 += i;
  for (auto i : S2)
    sum2 += i;
  for (auto i : S3)
    sum3 += i;
  int i = 0, j = 0, k = 0;
  while (i < N1 && j < N2 && k < N3) {
    if (sum1 == sum2 && sum2 == sum3)
      return sum1;
    else if (sum1 > min(sum2, sum3))
      sum1 -= S1[i++];
    else if (sum2 > min(sum1, sum3))
      sum2 -= S2[j++];
    else if (sum3 > min(sum2, sum1))
      sum3 -= S3[k++];
  }
  return 0;
}

int main() { return 0; }