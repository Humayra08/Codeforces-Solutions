#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int x = 0, c = 0, minn = arr[0];
     for(int i=0; i<n; i++){
        if(minn > arr[i]){
            x = i;
            minn = arr[i];
        }
    }

     for(int i=0; i<n; i++){
        if(arr[i] == minn){
            c++;
        }
     }
     if(c > 1){
        cout << "Still Rozdil" << endl;
     }else {
         cout << x+1 << endl;
     }

}

/// min number find kon index e store that number into a variable. then then check arr[that variable] == arr[i] c++
