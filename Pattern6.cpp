//Pattern 6
/*
12345
1234
123
12
1
*/

#include <bits/stdc++.h>
using namespace std;

void printp(int n){
    for (int i = n; i > 0;i--){
        for (int j = 0; j < i;j++){
            cout << j + 1;
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    printp(n);
    return 0;
}