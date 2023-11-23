// heap sort

// algorithm -> at first build a max heap, then start from the last index and
// swap the first and the last element and decrement the size of the array and
// then run the heapify algorithm, repeat all the above steps till the size is
// more than 1

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  void heapify(int arr[], int n, int i) {
    int largest = i;
    int leftChild = 2 * i + 1;
    int rightChild = 2 * i + 2;

    if (leftChild < n && arr[largest] < arr[leftChild]) {
      largest = leftChild;
    }
    if (rightChild < n && arr[largest] < arr[rightChild]) {
      largest = rightChild;
    }
    if (largest != i) {
      swap(arr[i], arr[largest]);
      i = largest;
      heapify(arr, n, i);
    }
  }

public:
  void buildHeap(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
      heapify(arr, n, i);
    }
  }

public:
  void heapSort(int arr[], int n) {
    buildHeap(arr, n);
    while (n != 0) {
      swap(arr[0], arr[n - 1]);
      n--;
      heapify(arr, n, 0);
    }
  }
};

int main() { return 0; }