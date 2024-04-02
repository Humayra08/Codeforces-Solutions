#include<bits/stdc++.h>
using namespace std;

int main(){
        string s1, s2;
        cin >> s1 >>s2;
        int count =0;
    for(int i=0; i < s1.size(); i++){
     s1[i]= toupper(s1[i]);
    }
     for(int i=0; i < s2.size(); i++){
    s2[i] = toupper(s2[i]);
    }
    for(int i=0; i < s1.size(); i++){
                if(s1[i]==s2[i]){
                    count=0;
                }
                else if(s1[i]<s2[i]){
                    count = -1;
                    break;
                }
                else if(s1[i]>s2[i]){
                    count = 1;
                    break;
                }
            }
cout << count << endl;
return 0;
}
