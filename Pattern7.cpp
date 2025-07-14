//Pattern 7
/*
        *
       ***
      *****
     *******   
*/


#include <bits/stdc++.h>
using namespace std;

void printp(int n){
    for (int i = 0; i < n;i++){
        //for space
        for (int j = n; j > n - i - 1;n--){
            cout << " ";
        }
        //for star
        for (int j = 0; j < 2 * i + 1; j++){
            cout<<"*";

        }
        //for space
        for (int j = n; j > n - i - 1;n--){
            cout << " ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin >> n;
    printp(n);
    return 0;
}