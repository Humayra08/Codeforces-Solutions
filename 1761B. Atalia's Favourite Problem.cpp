#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
            int n;
        cin >> n;
       string s;
       cin >>s;
       char max = s[0];
    for(int i=0; i<s.size(); i++){
       if(s[i] > max){
        max = s[i];
       }
    }
    cout << int (max)-96 << endl;
    }
    return 0;
}

