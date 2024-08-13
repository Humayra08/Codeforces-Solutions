#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        int c =0;
        cin >> n;
        while(n != 0){
             if(n>2){
            n -=4;
            c++;
            }else{
                n -= 2;
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}
