#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int arr[n];

        for(int i = 0; i<n; i++)
        cin >> arr[i];

         int flag = 1;

        if(k==1 && n > 1){
            for(int i = 0; i<(n-1); i++){
                if(arr[i] <= arr[i+1]){
                    flag = 1;
                }

                else{
                    flag = 0;
                    break;
                }
            }
        }


        if(flag) cout << "YES \n";
        else cout << "NO \n";
    }
}