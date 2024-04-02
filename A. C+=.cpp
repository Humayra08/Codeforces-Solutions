#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, n, c= 0;
        cin >> a >> b>> n;
     while (max(a,b)<= n){
        if(a>b){
            b+=a;
            c++;
        }
        else{
            a+=b;
            c++;
        }
     }
    cout << c<< endl;
        }
        return 0;
    }
