#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        string s;
        cin >> s;
        int a = s[0]+s[1]+s[2];
        int b = s[3]+s[4]+s[5];

        if(a == b){
            cout << "YES" << '\n';
        }else{
            cout << "NO" << '\n';
        }
    }
    return 0;
}
