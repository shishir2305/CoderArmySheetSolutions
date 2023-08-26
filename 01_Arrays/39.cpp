// count primes

// algorithm 1 -> traverse each element and check whether it is a prime number or not
// t.c -> O(n^2)
// s.c -> O(1)

// algorithm 2 -> use sieve of erastothenes
// t.c -> O(log(log n))
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

int countPrimes(int n)
{
    int count = 0;
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            count++;

            // check and mark all the numbers divisible by this number
            for (int j = 2 * i; j < n; j = j + i)
            {
                prime[j] = 0;
            }
        }
    }
    return count;
}

int main()
{
    int n = 10;
    cout << countPrimes(n) << endl;
    return 0;
}