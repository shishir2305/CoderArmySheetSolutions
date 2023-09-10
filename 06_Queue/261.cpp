// generate binary numbers

// algorithm -> while num is not equal to zero keep storing the modulo n%2 in the answer string at the end reverse the ans string and return do this for all 1 to n numbers
// t.c -> O(n log(n))
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

string solve(int n)
{
    string str = "";
    while (n)
    {
        str += to_string(n % 2);
        n /= 2;
    }
    reverse(str.begin(), str.end());
    return str;
}

vector<string> generate(int N)
{
    vector<string> ans;
    for (int i = 1; i <= N; i++)
    {
        string temp = solve(i);
        ans.push_back(temp);
    }
    return ans;
}

int main()
{

    return 0;
}