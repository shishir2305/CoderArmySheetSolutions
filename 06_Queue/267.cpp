// first unique character in a str

// algorithm 1 -> use two for loops and find whether a character is repeating or not
// t.c -> O(n^2)
// s.c -> O(1)

// algorithm 2 -> use a frequency array of characters and check which character's count is 1 then we return it
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int firstUniqChar(string s)
{
    vector<int> arr(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        arr[s[i] - 'a']++;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (arr[s[i] - 'a'] == 1)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    return 0;
}