#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        string s;
        cin >> s;
        int counta=0, countb=0;
        for(int j=0; j<s.size(); j++){
            if(s[j]=='A'){
                counta++;
            }
            else{
                countb++;
            }
        }
        if(counta>countb){
            cout << "A" << endl;
        }
        else{
            cout << "B" <<endl;
        }
    }
    return 0;
}
