#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, m;
        string a, b;
        cin >> n >> m >> a >> b;
        int c =0;
        int i = 0, j = 0;
        for (i = 0, j = 0; i < n && j < m; j++){
		if (a[i] == b[j]){
			c++;
			i++;
		}
	}
        cout << c << endl;
    }
    return 0;
}
