// palindrome string

// algorithm 1 -> copy string to a temporary string and reverse then reverse the temporary string and compare with original string
// t.c -> O(n)
// s.c -> O(n)

// algorithm 2 -> use two pointer i=0 and j=n-1 and keep checking whether they are same or not till i<j
// t.c. -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int isPalindrome(string s)
{
    int i = 0, j = s.size() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    string s = "madam";
    cout << isPalindrome(s) << endl;
    return 0;
}