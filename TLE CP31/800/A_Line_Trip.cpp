#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int arr[n];

        for(int i = 0; i<n; i++) cin >> arr[i];

        int max_cap = arr[0];

        for(int i = 0; i<n; i++){
            if(i==n-1)
            max_cap = max(max_cap, 2 * (x - arr[i]));
            
            else
            max_cap = max(max_cap, arr[i+1] - arr[i]);
        }

        cout << max_cap << "\n";
    }
}