#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> numbers(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> numbers[i];
        }

        ll largestNumber = *max_element(numbers.begin(), numbers.end());
        vector<ll> zeroIndices;

        while (largestNumber > 0)
        {
            auto it = std::find_if(numbers.begin(), numbers.end(), [largestNumber, k](ll x)
                                   { return x == largestNumber && x - k <= 0; });
            if (it != numbers.end())
            {
                zeroIndices.push_back(distance(numbers.begin(), it));
                numbers[it - numbers.begin()] = 0;
            }
            largestNumber = *max_element(numbers.begin(), numbers.end());
        }

        for (int index : zeroIndices)
        {
            cout << index + 1 << " ";
        }
        cout << endl;
    }
}
