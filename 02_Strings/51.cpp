// reverse a string

// algorithm 1 -> traverse the string in reverse order and store the characters in another string and then in the end return the new string
// t.c -> O(n)
// s.c -> O(n)

// algorithm 2 -> use two pointers i =0 and j=n-1, keep swapping the contents of str[i] and str[j] till i<j
// t.c. -> O(n)
// s.c. -> O(1)

#include <bits/stdc++.h>
using namespace std;

string reverseString(string str)
{
    int i = 0, j = str.size() - 1;
    while (i < j)
    {
        swap(str[i], str[j]);
        i++;
        j--;
    }
    return str;
}

int main()
{
    string str = "hello world";
    cout << reverseString(str) << endl;
    return 0;
}