#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        char grid[n][m];

        for (int i = 0; i < n; i++) {
                 for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
        }
        int min_row = n, max_row = -1, min_col = m, max_col = -1;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '#') {
                    if (i < min_row){
                            min_row = i;
                    }
                    if (i > max_row) {
                            max_row = i;
                    }
                    if (j < min_col) {
                            min_col = j;
                    }
                    if (j > max_col){
                        max_col = j;
                    }
                }
            }
        }

        int cenRow = (min_row + max_row) / 2 + 1;
        int cenCol = (min_col + max_col) / 2 + 1;

        cout << cenRow << " " << cenCol << endl;
    }
    return 0;
}
