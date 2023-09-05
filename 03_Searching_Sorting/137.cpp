// koko eating bananas

// algorithm 1 -> we can use brute force approach to check whether there is a number between the range 1 and max(piles[i]) element that can successfully meet the requiremenets
// t.c -> O(n^2)
// s.c -> O(1)

// algorithm 2 -> we can reduce the search space by neglecting the search space that is of no use by using binary search appraoch. We select the mid of low and high and check whether it successfully meets the critetia if yes then we move on its left to check for a smaller number else we move right
// t.c -> O(n log n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

bool eatingSuccessful(vector<int> &piles, long long &speed, int &h)
{
    long long estimatedTime = 0;
    for (int i = 0; i < piles.size(); i++)
    {
        estimatedTime += ceil(double(piles[i]) / double(speed));
    }
    return estimatedTime <= h;
}

int minEatingSpeed(vector<int> &piles, int h)
{
    int low = 1, ans = 0;
    int high = *max_element(piles.begin(), piles.end());
    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        if (eatingSuccessful(piles, mid, h))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;
    cout << minEatingSpeed(piles, h) << endl;
    return 0;
}