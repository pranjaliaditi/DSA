#include <bits/stdc++.h>
using namespace std;
int main(){
    string dna;
    cin >> dna;
    int n = dna.length();
    int cnt = 1;
    int i,j;
    for( i = 0; i<n;){
        int tcnt = 1;
        for(j = i+1; j<n; j++){
            if(dna[i] != dna[j])
                break;

            else
                tcnt ++;
        }

        i = j;
        cnt = max(cnt,tcnt);

        if(i==n-1)
        break;
    }

    cout << cnt;
}