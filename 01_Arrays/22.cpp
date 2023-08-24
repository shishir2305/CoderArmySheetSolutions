// alternate positive and negative numbers

// algorithm -> store positive and negative numbers in two separate arrays and then combine them accordingly
// t.c -> O(n)
// s.c. -> O(n)

#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
    vector<int> pos, neg;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            neg.push_back(arr[i]);
        }
        else
        {
            pos.push_back(arr[i]);
        }
    }
    int i = 0, j = 0;
    int turn = 0;
    while (i < pos.size() && j < neg.size())
    {
        if (turn % 2 == 0)
        {
            arr[turn] = pos[i];
            turn++;
            i++;
        }
        else
        {
            arr[turn] = neg[j];
            j++;
            turn++;
        }
    }
    while (i < pos.size())
    {
        arr[turn] = pos[i];
        turn++;
        i++;
    }
    while (j < neg.size())
    {
        arr[turn] = neg[j];
        turn++;
        j++;
    }
}

int main()
{
    int arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    for (auto it : arr)
    {
        cout << it << endl;
    }
    return 0;
}