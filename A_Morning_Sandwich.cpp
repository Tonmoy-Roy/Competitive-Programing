#include <bits/stdc++.h>
#define ll long long int
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        vector<int> numbers;
        int numCount, k;
        cin >> numCount >> k;
        for (int i = 0; i < numCount; ++i)
        {
            int num;
            cin >> num;
            numbers.push_back(num);
        }

        bool found = false;
        for (int i = 0; i < numbers.size(); ++i)
        {
            for (int j = i + 1; j < numbers.size(); ++j)
            {
                if (numbers[i] + numbers[j] <= k)
                {
                    found = true;
                    break;
                }
            }
            if (found)
            {
                break;
            }
        }

        if (found)
        {
            vector<pair<int, int>> indexedNumbers;

            for (int i = 0; i < numbers.size(); ++i)
            {
                indexedNumbers.push_back(make_pair(numbers[i], i));
            }

            sort(indexedNumbers.begin(), indexedNumbers.end());

            vector<int> resultIndices;
            for (const auto &pair : indexedNumbers)
            {
                resultIndices.push_back(pair.second);
            }

            for (const auto &index : resultIndices)
            {
                cout << index + 1 << " ";
            }
        }
        else
        {
            int closestSum = INT_MAX;
            int closestIndex = -1;

            for (int i = 0; i < numbers.size(); ++i)
            {
                if (abs(k - numbers[i]) < closestSum)
                {
                    closestSum = abs(k - numbers[i]);
                    closestIndex = i;
                }
            }

            cout << closestIndex + 1 << " ";
            for (int i = 0; i < numbers.size(); ++i)
            {
                if (i != closestIndex)
                {
                    cout << i + 1 << " ";
                }
            }
        }
        cout << endl;
    }
}
