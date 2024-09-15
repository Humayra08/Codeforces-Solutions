#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n ;
        cin >> n;
        int arr[n];
        for(int i = 0; i<n; i++){
            cin >> arr[i];
        }
        int minn = arr[0];
        for(int i = 0; i<n; i++){
             if(arr[i] < minn){
                minn = arr[i];
             }
         }
         int a =0;
         for(int i = 0; i<n; i++){
            if(arr[i] != minn){
                a = a + (arr[i]-minn);
            }
         }
         cout << a << '\n';
    }
}
