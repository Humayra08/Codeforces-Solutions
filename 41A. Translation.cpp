#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int a=0;
    if (s.size() != t.size()) {
        cout << "NO" << endl;
        return 0;
    }
    for(int i=0; i<s.size(); i++){
            if(s[i] != t[s.size() -i -1]){
                a=1;
            }
        }
    if(a == 0){
        cout << "YES" << endl;
    }
    else if(a == 1){
        cout << "NO" << endl;}
    return 0;
}
