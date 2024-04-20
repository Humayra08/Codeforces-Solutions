#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int k, a;
    cin >> k;

        if(s== "January"){
            a=1;
        }
        else if(s == "February"){
            a=2;
        }
        else if(s == "March"){
            a=3;
        }
        else if(s == "April"){
            a=4;
        }
        else if(s == "May"){
            a=5;
        }
        else if(s == "June"){
            a=6;
        }
        else if(s == "July"){
            a=7;
        }
        else if(s == "August"){
            a=8;
        }
        else if(s == "September"){
            a=9;
        }
        else if(s == "October"){
            a=10;
        }
        else if(s == "November"){
            a=11;
        }
        else if(s == "December"){
            a=12;
        }
        int c = (k + a) % 12;
        if (c == 0) c = 12;

        switch(c){
            case 1 :
                cout << "January" << endl;
                break;
            case 2 :
                cout << "February" << endl;
                break;
            case 3 :
                cout << "March" << endl;
                break;
            case 4 :
                cout << "April" << endl;
                break;
            case 5 :
                cout << "May" << endl;
                break;
            case 6 :
                cout << "June" << endl;
                break;
            case 7 :
                cout << "July" << endl;
                break;
            case 8 :
                cout << "August" << endl;
                break;
            case 9 :
                cout << "September" << endl;
                break;
            case 10 :
                cout << "October" << endl;
                break;
            case 11 :
                cout << "November" << endl;
                break;
            case 12 :
                cout << "December" << endl;
                break;
        }
    return 0;
}
