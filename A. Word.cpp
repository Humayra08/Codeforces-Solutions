#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int upper=0, lower =0;
    for(int i=0; i< s.size(); i++){
        if(s[i]>='A' && s[i]<='Z'){
            upper++;
        }
        else if(s[i]>='a' && s[i]<='z'){
            lower++;
        }
    }
    if(upper > lower){
    for(int i=0; i<s.size(); i++){
        s[i]= toupper(s[i]);
    }
    }
    else if(upper<=lower){
        for(int i=0; i< s.size(); i++){
        s[i]= tolower(s[i]);
    }
    }
    cout << s << endl;
    return 0;
}
