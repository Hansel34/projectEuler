#include "bits/stdc++.h"
using namespace std;

long long int SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    long long int sum = 0;
    // Print all prime numbers
    for (long long int p=2; p<=n; p++)
       if (prime[p])
       {
          sum += p;
    }
    return sum;
}

int main()
{
    cout << SieveOfEratosthenes(2000000);
    return 0;
}

