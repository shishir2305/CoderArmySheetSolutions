// fractional knapsack

// algorithm -> sort all the items according to value/weight ratio, now store
// the elements one by one till you find an element that cannot be stored
// completely, so store it partially and break the loop as traversing more is of
// no use
// t.c -> O(n log(n))
// s.c -> O(1)

static bool cmp(Item a, Item b) {
  double r1 = (double)a.value / a.weight;
  double r2 = (double)b.value / b.weight;
  return r1 > r2;
}

double fractionalKnapsack(int W, Item arr[], int n) {
  sort(arr, arr + n, cmp);
  int curWeight = 0;
  double finalvalue = 0.0;
  for (int i = 0; i < n; i++) {
    if (curWeight + arr[i].weight <= W) {
      curWeight += arr[i].weight;
      finalvalue += arr[i].value;
    } else {
      int remain = W - curWeight;
      finalvalue += arr[i].value * ((double)remain / arr[i].weight);
      break;
    }
  }
  return finalvalue;
}