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

        for(int i = 0; i<n; i++){
            for(int j = 1; j < n - i; j++){
                if(arr[i] < arr[j]){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        int flag = 1;

        for(int i = 0; i<(n-1); i++){
            if(arr[i] > arr[i+1]){
                flag = 0;
                break;
            }
        }


        if(flag) cout << "YES \n";
        else cout << "NO \n";
    }
}