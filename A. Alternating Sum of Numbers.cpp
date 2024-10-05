#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int sumPos = 0, sumNeg = 0;
        int n;
        cin >> n;
        int arr[n];
        for(int i =0; i<n; i++){
            cin >> arr[i];
        }
         for(int i =0; i<n; i++){
            if(i % 2 == 0){
                sumPos+= arr[i];
            }
            else{
                sumNeg += arr[i];
            }
        }


        cout << sumPos-sumNeg << '\n' ;
    }
}
