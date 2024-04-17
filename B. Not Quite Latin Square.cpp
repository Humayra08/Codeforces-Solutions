#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
            string s1, s2, s3;
            cin >> s1>> s2 >> s3;
            int c=0;
            for(int i=0; i<3; i++){
                if(s1[i]!='A' && s2[i] != 'A' && s3[i] !='A'){
                     c =1;
                     break;
                }
                else if(s1[i]!='B' && s2[i] != 'B' && s3[i] !='B'){
                    c =2;
                    break;
              }
                else if(s1[i]!='C' && s2[i] != 'C' && s3[i] !='C'){
                        c = 3;
                    break;
                }
            }
            if(c ==1){
                cout << "A" <<endl;
            }
           else if(c ==2){
                cout << "B" <<endl;
            }
            else if(c==3){
                cout << "C" <<endl;
            }

        }
    return 0;
}
