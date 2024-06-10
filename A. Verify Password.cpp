#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    string s;
    cin >> t ;
    while(t--){
        bool bhul = false;
        cin >> n;
        cin >> s;
        for(int i =0; i<s.size()-1; i++){
            if(isupper(s[i])){
                bhul = true;
                break;
            }
            else if(isalpha(s[i]) && isdigit(s[i+1])){
                bhul = true;
                break;
            }
            else if(s[i] > s[i+1]){
                bhul = true;
                break;
            }
        }
        if(bhul){
            cout << "NO" <<endl;
        }else{
            cout << "YES" << endl;
        }
    }
}
