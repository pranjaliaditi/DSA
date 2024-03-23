#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){

    int n;
    cin >> n;

    if(n <= 2 || n%4 == 1 || n%4 == 2)
    {
        cout << "NO" << "\n";
        return 0;
    }

    cout << "YES \n";

    vector <int> a;
    vector <int> b;
      
    b.push_back(1);
    b.push_back(2);
    a.push_back(3);

    for(int i = 4; i<n; i+=4){
        a.push_back(i);
        b.push_back(i+1);
        b.push_back(i+2);
        a.push_back(i+3);
    }

    if(n%4 == 0){
        int flag = 0;
        for(int i = 0; i<a.size(); i++){
            if(a[i] == n/2){
                a[i] = n;
                b.push_back(n/2);
                flag = 1;
                break;
            }
        }

        if(flag == 0){
        for(int i = 0; i<b.size(); i++){
            if(b[i] == n/2){
                b[i] = n;
                a.push_back(n/2);
                flag = 1;
                break;
            }
        }
        }

    }

    cout << a.size() << "\n";
    for(int i = 0; i<a.size();i++)
    cout << a[i] << " ";

    cout << "\n";

    cout << b.size() << "\n";
    for(int i = 0; i<b.size();i++)
    cout << b[i] << " ";

}
