// Check if strings are rotations of each other or not

// algorighm 1 -> rotate every character in s1 and check whether it is equal to s2 or not
// t.c. -> O(n^2)
// s.c. -> O(1)

// algorithm 2 -> concatenate s1 with itself and then search s2 in s1 using stl find function
// t.c. -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

bool areRotations(string s1, string s2)
{
    if (s1.size() != s2.size())
    {
        return false;
    }
    return ((s1 + s1).find(s2) != string::npos);
}

int main()
{
    string str1 = "geeksforgeeks";
    string str2 = "forgeeksgeeks";
    cout << areRotations(str1, str2) << endl;
    return 0;
}