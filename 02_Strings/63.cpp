// remove all duplicates from a string

// algorithm -> use a hashmap to store the frequency of an element and store only unique characters
// t.c -> O(n)
// s.c -> O(n) if all the characters are distinct

#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string str)
{
    string ans = "";
    unordered_map<int, int> mp;
    for (int i = 0; i < str.size(); i++)
    {
        if (!mp[str[i]])
        {
            ans += str[i];
        }
        mp[str[i]] = 1;
    }
    return ans;
}

int main()
{
    string str = "geeksforgeeks";
    cout << removeDuplicates(str) << endl;
    return 0;
}