#include <iostream>

using namespace std;

long long int max_interval(long long int n) {
  // Find the smallest positive integer that is a multiple of n.
  long long int smallest_multiple = 1;
  while (smallest_multiple <= n && n % smallest_multiple != 0) {
    smallest_multiple++;
  }

  // Initialize the maximum interval to 1.
  int max_interval = 1;

  // Loop through all positive integers greater than the smallest multiple of n.
  for (long long int i = smallest_multiple + 1; i <= n; i++) {
    // If i is a multiple of n, then add it to the maximum interval.
    if (n % i == 0) {
      max_interval++;
    }

    // If the maximum interval is greater than 2, then check if n is a multiple of the middle integer in the maximum interval.
    if (max_interval > 2 && n % (i + (max_interval - 1) / 2) != 0) {
      max_interval = 2;
    }
  }

  // Return the maximum interval.
  return max_interval;
}

int main() {
  // Test the code with different values of n.
  cout << max_interval(1) << endl; // 1
  cout << max_interval(40) << endl; // 2
  cout << max_interval(990990) << endl; // 3
  cout << max_interval(4204474560) << endl; // 6
  cout << max_interval(169958913706572972) << endl; // 4
  cout << max_interval(365988220345828080) << endl; // 22
  cout << max_interval(387701719537826430) << endl; // 3
  cout << max_interval(620196883578129853) << endl; // 1
  cout << max_interval(864802341280805662) << endl; // 2
  cout << max_interval(1000000000000000000) << endl; // 2

  return 0;
}
