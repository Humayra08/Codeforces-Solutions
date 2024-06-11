#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int maxSum = 0, optimalX = 2;

        for (int i = 2; i <= n; i++) {
            int k = n / i;
            int sum = i * (k * (k + 1)) / 2;

            if (sum > maxSum) {
                maxSum = sum;
                optimalX = i;
            }
        }
        cout << optimalX << endl;
    }
    return 0;
}
