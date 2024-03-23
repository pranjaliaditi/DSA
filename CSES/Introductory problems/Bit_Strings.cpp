#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){

    int n;
    cin >> n;
    int num = 1;
    int mod = (1000*1000*1000)+7;

    // O(n) solution
    // for(int i = 1; i<=n; i++){
    //     //num *= 2;
    //     num = ((num%mod) * 2) % mod;
    // }

    // O(log n) solution
    // binary exponentiation
    
    int ans = 1;

    while(n!= 0){

        int num2 = 1;

        if(n == 1){
            ans =  ((ans%mod) * 2) % mod;
            n--;
            break;
        }

        else{
            num2 = 2;
        }

        int i;

        for(i = 2; i<=n; i*=2)
        {
            //num2 *= num2;
            num2 = ((num2%mod) * (num2%mod)) % mod;
        }

        //ans *= num2;
        ans = ((ans%mod) * (num2%mod)) % mod; 

        n = n - (i/2); 
    }

    cout << ans;
}

// broke num2 in ways of binary expos of X2 and then multiplied it with the ans