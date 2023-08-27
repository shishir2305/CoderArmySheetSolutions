// meta strings

// algorithm -> traverse through the characters and check for mismatch character positions and store their index, at the end swap the two mismatched index and check whether the strings are equal or not

#include <bits/stdc++.h>
using namespace std;

bool metaStrings(string s1, string s2)
{
    if (s1.size() != s2.size())
    {
        return false;
    }
    if (s1 == s2)
        return false;
    int first = 0, second = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[i])
        {
            if (!first)
            {
                first = i;
            }
            else
            {
                if (!second)
                {
                    second = i;
                }
            }
        }
    }
    swap(s1[first], s1[second]);
    return s1 == s2;
}

int main()
{
    string s1 = "geeks", s2 = "keegs";
    cout << metaStrings(s1, s2) << endl;
    return 0;
}