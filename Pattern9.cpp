//Pattern 9


#include <bits/stdc++.h>
using namespace std;

void printup(int n){
    for (int i = 0; i < n;i++){
        //for space
        for (int j = 0; j < n - i - 1;j++){
            cout << " ";
        }
        //for star
        for (int j = 0; j < 2 * i + 1; j++){
            cout<<"*";

        }
        //for space
        for (int j = 0; j < n - i - 1;j++){
            cout << " ";
        }
        cout<<endl;
    }
}

void printdown(int n){
    for (int i = 0; i < n;i++){
        //for space
        for (int j = 0; j <i;j++){
            cout << " ";
        }
        //for star
        for (int j = 0; j <2*n -(2 * i + 1); j++){
            cout<<"*";

        }
        //for space
        for (int j = 0; j <i;j++){
            cout << " ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin >> n;
    printup(n);
    printdown(n);
    return 0;
}