#include <bits/stdc++.h>
using namespace std;

int lower_bound(int arr[], int n, int num){
    int l = 0;
    int r = n-1;
    int mid;

    while(l<=r){
        mid = (l+r)/2;

        if(num < arr[mid]){
            r = mid - 1;
        }

        else if(num > arr[mid]){
            l = mid+1;
        }

        else{
            return mid;
        }
    }

    return l;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0; i<n; i++)
    cin >> arr[i];

    int num;
    cin >> num;

    cout << lower_bound(arr,n,num); // index returned
}