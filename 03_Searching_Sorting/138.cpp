// 3 Sum

// algorithm 1 -> use 3 for loops and find the required sum
// t.c -> O(n^3)
// s.c -> O(1)

// algorithm 2 -> traverse every element and use two sum approach to find the required numbers
// t.c -> O(n^2)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        int t = -nums[i];
        int low = i + 1;
        int high = n - 1;
        while (low < high)
        {
            if (nums[low] + nums[high] == t)
            {
                ans.push_back({nums[i], nums[low], nums[high]});
                while (low + 1 < high && nums[low + 1] == nums[low]) // eliminating duplicate elements
                    low++;
                while (low < high && nums[high - 1] == nums[high])
                    high--;
                low++;
                high--;
            }
            else if (nums[low] + nums[high] > t)
            {
                high--;
            }
            else
            {
                low++;
            }
            while (i + 1 < n && nums[i + 1] == nums[i])
                i++;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = threeSum(nums);
    return 0;
}