#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int arr[3];
        for(int i=0; i<3; i++){
            cin >> arr[i];
        }
         for(int i=0; i<3; i++){
            for(int j=i+1; j<3; j++){
                if(arr[i]>arr[j]){
                  int temp = arr[i];
                  arr[i]=arr[j];
                  arr[j] = temp;
                }
            }
        }
    cout << arr[1] <<endl;
    }
}
