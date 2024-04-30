#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n, sum;
        cin >> n;
        sum = (n * (n + 1)) / 2;

        for (long long int i = 1; i <= n; i *= 2) {
            sum -= 2 * i;
        }
        cout << sum << endl;
    }
    return 0;
}
