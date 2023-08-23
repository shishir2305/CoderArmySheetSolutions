// length of last word

// algorithm -> start counting from the last of the string and avoid whitespaces, once you encounter a word start counting that word till you receive a whitespace again
// t.c. -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s)
{
    int i = s.size() - 1;
    int lastWordLength = 0;
    while (i >= 0)
    {
        if (s[i] != ' ')
        {
            while (i >= 0 && s[i] != ' ')
            {
                lastWordLength++;
                i--;
            }
            return lastWordLength;
        }
        i--;
    }
    return lastWordLength;
}

int main()
{
    string str = "   fly me   to   the moon  ";
    cout << lengthOfLastWord(str) << endl;
    return 0;
}