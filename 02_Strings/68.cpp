// sum of two large numbers

// algorithm 1 -> convert strings to numbers and then add, but may encounter integer overflow problems
// t.c -> O(n)
// s.c -> O(1)

// algorithm 2 -> take single character from the right most side of the string add them and store them in ohter string
// t.c. -> O(s1 + s2)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

string findSum(string x, string y)
{
    string ans = "";
    int i = x.size() - 1, j = y.size() - 1, carry = 0;
    while (i >= 0 || j >= 0 || carry)
    {
        int sum = 0;
        if (i < x.size())
        {
            sum += (x[i] - '0');
            i--;
        }
        if (j < y.size())
        {
            sum += (y[j] - '0');
            j--;
        }
        sum += carry;
        carry = sum / 10;
        int temp = sum % 10;
        ans += to_string(temp);
    }
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++) // to avoid leading zeroes in the answer
    {
        if (ans[i] != '0')
        {
            return ans.substr(i);
        }
    }
    return "0";
}

int main()
{
    string s1 = "25", s2 = "23";
    cout << findSum(s1, s2) << endl;
    return 0;
}