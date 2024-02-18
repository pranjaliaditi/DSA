#include <bits/stdc++.h>
using namespace std;

bool binary(int arr[], int num, int n){
    
    sort(arr,arr+n);

    int l = 0;
    int r = n-1;
    
    while(l<=r){
        int mid = (l+r)/2;

        if(num < arr[mid]){
            r = mid - 1;
        }
        

        else if(num > arr[mid]){
            l = mid+1;
        }

        else{
            return true;
        }
    }

    return false;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0; i<n; i++)
        cin >> arr[i];
    int num;
    cin >> num;

    if( binary(arr,num,n))
    cout << "Present";

    else
    cout << "Not Present";
}