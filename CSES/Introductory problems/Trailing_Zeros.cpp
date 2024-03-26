#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){

    int n;
    cin >> n;
    int ans = 0;
    
    for(int i = 5, j = 1; i<= n; j++, i*=5){
        ans += (n/i); 
    }

    cout << ans;
}

//no. of zeros = no. of times divisble by 10, for that (2x5)
// but 2 will be more than 5 hence count 5
// so no.s of 5 will be multiples of (5 + 25 X 2 + 125 X 3 so on)
// first it will count 5s
// then it will add +1 for all 25s 
//(25 has 2 5s but one of such is calc when 5 ones were calc hence we will now count only 1)