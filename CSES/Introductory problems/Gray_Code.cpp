#include <bits/stdc++.h>
using namespace std;

vector < vector <string>> dp(17);

void calc (){
    for(int i = 1; i<17; i++){
        
    dp[i].push_back("0");
    dp[i].push_back("1");

    int k, j;
    for (k = 2; k < (1<<i); k = k<<1)
    {
       
        for (j = k-1 ; j >= 0 ; j--)
            dp[i].push_back(dp[i][j]);
            
        for (j = 0 ; j < k ; j++)
            dp[i][j] = "0" + dp[i][j];
 
        for (j = k ; j < 2*k ; j++)
            dp[i][j] = "1" + dp[i][j];
    }

    }
}

int main(){
    int n;
    cin >> n;
    calc();
    
    for(int i = 0; i<dp[n].size();i++){
        cout << dp[n][i] << "\n";
    }
}