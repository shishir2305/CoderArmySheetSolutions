// sort a string

// algorithm 1 -> use stl sort function to sort the array
// t.c -> O(n log n)
// s.c -> O(1)

// algorithm 2 -> use character array and count the frequency of each character and arrange thema in ascending order according to their frequency
// t.c -> O(n)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

string sort(string s)
{
    int count = 0;
    vector<int> arr(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        arr[s[i] - 'a']++;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        int temp = arr[i];
        for (int j = 0; j < temp; j++)
        {
            s[count++] = ('a' + i);
        }
    }
    return s;
}

int main()
{
    string str = "vtyg";
    cout << sort(str) << endl;
    return 0;
}