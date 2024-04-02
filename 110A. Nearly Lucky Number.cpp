#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    long long int n;
    int c=0;
    cin >> n;

    string s = to_string(n);

   for(int i=0; i<s.size(); i++){
        if(s[i] == '4' || s[i] == '7'){
            c++;
        }
    }
    if(c==4 || c==7){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

