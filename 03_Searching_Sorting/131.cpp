// overlapping intervals

// algorithm -> at first sort the array and then check if the last stored element is greater than the current element's range then simply place the maximum of last element of two in the answer else push the current element in the answer array
// t.c -> O(n log(n))
// s.c -> o(1)

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> overlappedInterval(vector<vector<int>> &intervals)
{
    vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end());
    for (int i = 0; i < intervals.size(); i++)
    {
        if (ans.size() == 0)
        {
            ans.push_back(intervals[i]);
        }
        else
        {
            vector<int> temp = ans.back();
            if (temp[1] >= intervals[i][0])
            {
                ans.back()[1] = max(temp[1], intervals[i][1]);
            }
            else
            {
                ans.push_back(intervals[i]);
            }
        }
    }
    return ans;
}

int main()
{

    return 0;
}
