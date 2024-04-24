#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n;
    set<int>s;

   while(n--){
        cin>> x;
        s.insert(x);
   }
   if(s.size() == 1){
        cout << "NO" << endl;
   }
   else{
        auto a = s.begin();
        a++;
        cout << *a << endl;
   }

    return 0;
}

