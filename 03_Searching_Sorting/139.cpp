// 3 Sum closest

// algorithm -> traverse every number and use two sum to calculate the triplet with sum  equal to lowest absolute differece between sum and target and keep storing the answer and lowest absolute difference found so far
// t.c -> O(n^2)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int> &nums, int target)
{
    int ans = 0, diff = INT_MAX;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        int j = i + 1, k = nums.size() - 1;
        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum == target)
            {
                return sum;
            }
            else
            {
                if (abs(sum - target) < diff)
                {
                    ans = sum;
                    diff = abs(sum - target);
                }
            }
            if (sum < target)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;
    cout << threeSumClosest(nums, target) << endl;
    return 0;
}