// maximum occuring character

// algorithm -> create an array of size 26 and add element to it according to the character - 97 value
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

char getMaxOccuringChar(string str)
{
    char ans = ' ';
    int maxi = INT_MIN;
    vector<int> freq(26);
    for (int i = 0; i < str.size(); i++)
    {
        freq[str[i] - 97]++;
    }
    for (int i = 0; i < freq.size(); i++)
    {
        if (freq[i] > maxi)
        {
            maxi = freq[i];
            ans = i + 97;
        }
    }
    return ans;
}

int main()
{
    string str = "testsample";
    cout << getMaxOccuringChar(str) << endl;
    return 0;
}