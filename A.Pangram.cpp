#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c=0;
    string s;
    cin >> n >> s;
   for(int i=0; i<n; i++){
              s[i] = tolower(s[i]);
   }
    sort(s.begin(), s.end());
    for(int i=0; i<n; i++){
            if(s[i] != s[i+1]){
                c++;
            }
    }
    if(c == 26){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}

