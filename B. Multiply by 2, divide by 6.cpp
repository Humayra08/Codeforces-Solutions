#include<bits/stdc++.h>
using namespace std;

void sol(int t){
    while(t--){
        long long int n;
        cin >> n;
        int c=0;
       while(n%6 == 0){
        n /= 6;
        c++;
       }
       while(n%3 ==0){
        n /= 3;
        c+=2;
       }
       if(n !=1 ){
        cout << "-1" <<endl;
       }
       else{
        cout<< c << endl;
       }
    }
}

int main(){
    int t;
    cin >> t;
    sol(t);
}


