#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        vector<int> vec ={a, b, c};

        for(int i=0; i<5; i++){
           sort(vec.begin(), vec.end());
           vec[0]++;
        }

        cout << vec[0] *vec[1] * vec[2] << endl;
    }
    return 0;
}
