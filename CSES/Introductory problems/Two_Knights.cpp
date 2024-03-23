#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){

    int n;
    cin >> n;

    if(n >= 1)
    cout << 0 << "\n";

    if(n >= 2)
    cout << 6 << "\n";

    for(int i = 3; i<=n; i++){
        int ans = (((i*i) * ((i*i)-1))/2) - (2 * (2 * (i-1) * (i-2)));
        cout << ans << "\n";
    }

}
