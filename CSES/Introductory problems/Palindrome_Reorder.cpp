#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> alpha(26, 0);
    int n = s.length();

    for (int i = 0; i < n; i++) {
        int a = s[i] - 'A';
        alpha[a]++;
    }

    int odd = 0;
    int odd_ind = 0;

    
    for (int i = 0; i < 26; i++) {
        if (alpha[i] % 2) {
            odd++;
            odd_ind = i;
        }
    }

    if (odd > 1) {
        cout << "NO SOLUTION\n"; 
    } else {
        vector<char> sol(n);
        int k = 0;
        int i = 0, j = n - 1;

        
        for (k = 0; k < 26; k++) {
            while (alpha[k] >= 2) {
                sol[i++] = 'A' + k;
                sol[j--] = 'A' + k;
                alpha[k] -= 2;
            }
        }

        
        if (odd == 1) {
            sol[n / 2] = 'A' + odd_ind;
        }

        
        for (int i = 0; i<n; i++) {
            cout << sol[i];
        }
        cout << "\n"; 
    }

    return 0;
}
