#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;
     int  ans=0;
    for(int i=0; i<n; i++){
    int count=0;

       int arr[3];
       for(int j=0; j<3; j++){
       cin >> arr[j];
    }
       for(int j=0; j<3; j++){
    if(arr[j] == 1){
        count++;
    }
       }
      if(count >= 2){
        ans++;
    }
    }
    cout << ans << endl;
    return 0;
}
