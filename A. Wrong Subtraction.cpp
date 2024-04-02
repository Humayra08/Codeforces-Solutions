#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    while(k--){
        int a=0;
        if( (a=n%10)!=0 ){
            n=n-1;
        }
        else{
            n = n/10;
        }
    }
    cout << n << endl;
    return 0;
}
