//pattern 10


#include <bits/stdc++.h>
using namespace std;


void printp(int n){
    for (int i = 1; i <= 2 * n - 1;i++){
        int count = i;
        if(i>n) count = 2 * n - i;
        for (int j = 1; j <= count;j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin>>n;
    printp(n);
    return 0;
}