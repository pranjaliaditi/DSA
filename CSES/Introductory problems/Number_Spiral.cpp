#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){

    int t;
    cin >> t;

    while(t--){
        int row, col;
        cin >> row >> col;
        int num;
        if(row >= col){
            num = (row % 2 == 0) ? (row * row - col + 1) : ((row - 1) * (row - 1) + col);
        }
        else{
            num = (col % 2 == 0) ? ((col - 1) * (col - 1) + row) : (col * col - row + 1);
        }

        cout << num << "\n";
    }
}
