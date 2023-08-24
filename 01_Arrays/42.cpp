// find majority element (count > n/2) in an array

// algorithm 1 -> use two loops to count the occurences of each element and check whether they satisfy the condition or not
// t.c. -> O(n^2)
// s.c. -> O(1)

// algorithm 2 -> sort the array and return n/2th element of the array, as it is evident that the majority element will always be present at n/2th position
// t.c -> O(n log(n))
// s.c -> O(1)

// algorithm 3 -> use moore's voting algorithm, that considers a element as majority element and increases its occurence count when similar elements are encountered and decreases the count when non similar elements are encountered, at the end we check the count of the majority element stored
// t.c -> O(n)
// s.c. -> O(1)

#include <bits/stdc++.h>
using namespace std;

// using sorting
int majorityElement1(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    return nums[nums.size() / 2];
}

// using moore's voting algorithm
int majorityElement2(vector<int> &nums)
{
    int count = 1, majorityElement = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == majorityElement)
        {
            count++;
        }
        else
        {
            count--;
            if (count == 0)
            {
                majorityElement = nums[i];
                count = 1;
            }
        }
    }
    count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == majorityElement)
        {
            count++;
        }
    }
    if (count > nums.size() / 2)
    {
        return majorityElement;
    }
    return -1;
}

int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << majorityElement2(nums) << endl;
    return 0;
}