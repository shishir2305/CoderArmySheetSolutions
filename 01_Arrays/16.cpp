// remove duplicate elements from sorted array

// algorithm -> start traversing the array and keep placing the first occurence of every element only and neglect all other occurences
// t.c -> O(n)
// s.c. -> O(1)

#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int i = 0;
    for (int j = 1; j < nums.size(); j++)
    {
        if (nums[j] != nums[i])
        {
            nums[i + 1] = nums[j];
            i++;
        }
    }
    return i + 1;
}

int main()
{
    vector<int> nums = {1, 2, 2, 4};
    removeDuplicates(nums);
    for (auto it : nums)
    {
        cout << it << endl;
    }
    return 0;
}