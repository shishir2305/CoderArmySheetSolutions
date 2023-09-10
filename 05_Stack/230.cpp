// baseball game

// algorithm -> use vector and perform the task one by one using if and else statements
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

int calPoints(vector<string> &operations)
{
    vector<int> arr;
    for (int i = 0; i < operations.size(); i++)
    {
        if (operations[i] == "+")
        {
            int temp = arr[arr.size() - 1] + arr[arr.size() - 2];
            arr.push_back(temp);
        }
        else if (operations[i] == "D")
        {
            int temp = 2 * arr.back();
            arr.push_back(temp);
        }
        else if (operations[i] == "C")
        {
            arr.pop_back();
        }
        else
        {
            arr.push_back(stoi(operations[i]));
        }
    }
    return accumulate(arr.begin(), arr.end(), 0);
}

int main()
{

    return 0;
}