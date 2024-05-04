#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int a = 0;
        for(int i = 1; i <x ; i++){
            if(__gcd(x, i) + i == x){
                a = i;
                break;
            }
        }
        cout << a << endl;
    }
    return 0;
}
