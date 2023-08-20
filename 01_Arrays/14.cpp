// find fine

// algorithm -> check for even and odd condition using modulo operator and add accordingly
// t.c. -> O(n)
// s.c. -> O(1)

#include <bits/stdc++.h>
using namespace std;

long long int totalFine(int n, int date, int car[], int fine[])
{
    long long int totalFine = 0;
    for (int i = 0; i < n; i++)
    {
        if (date % 2 == 0)
        {
            if (car[i] % 2 != 0)
            {
                totalFine += fine[i];
            }
        }
        else
        {
            if (car[i] % 2 == 0)
            {
                totalFine += fine[i];
            }
        }
    }
    return totalFine;
}

int main()
{
    int N = 4, date = 12;
    int car[] = {2375, 7682, 2325, 2352};
    int fine[] = {250, 500, 350, 200};

    cout << totalFine(N, date, car, fine) << endl;

    return 0;
}