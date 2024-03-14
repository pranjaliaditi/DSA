#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    long long moves = 0;
    for(int i =0; i<n; i++){
        cin >> arr[i];
        
        if(i == 0)
            continue;
        
        else{
            if(arr[i] < arr[i-1])
                { moves += (arr[i-1] - arr[i]);
                    arr[i] = arr[i-1];
                } 
        }
    }

    cout << moves;
}