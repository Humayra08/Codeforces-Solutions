#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

  for(int i=0; i<s.size(); i++){
             for(int j=i+1; j<s.size(); j++){
                    if(s[j] == '+'){
                        continue;
                    }
                 else if(s[i]>s[j]){
                    char temp = s[i];
                    s[i]=s[j];
                    s[j]=temp;
                 }
             }
     }
    cout << s << endl;
    return 0;

}
