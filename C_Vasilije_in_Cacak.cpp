#include <iostream>
#define ll long long int

using namespace std;

bool isDivisibleByFiveDistinctIntegersSum(int n, int k, int x)
{
    // Create an array to store the divisors.
    int divisors[k];

    // Initialize the count of divisors.
    int count = 0;

    // Iterate from 1 to n and check if each number is a divisor of x.
    for (int i = 1; i <= n; i++)
    {
        if (x % i == 0)
        {
            divisors[count] = i;
            count++;

            // If we have found 5 distinct divisors, then we can check their sum.
            if (count == k)
            {
                int sum = 0;
                for (int j = 0; j < k; j++)
                {
                    sum += divisors[j];
                }

                // If the sum of the divisors is also a divisor of x, then we can return true.
                if (x % sum == 0)
                {
                    return true;
                }
            }
        }
    }

    // If we reach here, then we could not find 5 distinct divisors or their sum is not a divisor of x.
    return false;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, x;
        cin >> n >> k >> x;

        // Check if x is divisible by 5 distinct integers sum between 1 to n.
        bool isDivisible = isDivisibleByFiveDistinctIntegersSum(n, k, x);

        // Print the result.
        if (isDivisible)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }

        return 0;
    }
}
