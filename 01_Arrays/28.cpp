// rearrange array alternatively

// algorithm 1 -> the simplest way is to store hallf elements in one array and
// other half in other array and them produce the result by selecting one one
// element from both the array at a time
// t.c -> O(n)
// s.c -> O(n)

// algorithm 2 -> the main logic behind solving this question in place is to
// store 2 numbers at one array location using the formula
// for even index -> arr[i]=arr[i]+(arr[maxIndex]%maxElement)*maxElement
// for odd index -> arr[i]=arr[i]+(arr[minIndex]%maxElement)*maxElement
// if we take the modulo of every element with maxElement then we get original
// array and if we divide every element with the maxElement then we get the
// desired result
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

void rearrange(long long *arr, int n) {

  int minIndex = 0, maxIndex = n - 1;
  int maxElement = arr[maxIndex] + 1;

  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      arr[i] = arr[i] + (arr[maxIndex] % maxElement) * maxElement;
      maxIndex--;
    } else {
      arr[i] = arr[i] + (arr[minIndex] % maxElement) * maxElement;
      minIndex++;
    }
  }
  for (int i = 0; i < n; i++) {
    arr[i] = arr[i] / maxElement;
  }
}

int main() { return 0; }