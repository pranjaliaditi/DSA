#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    if(n == 2 || n == 3)
    cout << "NO SOLUTION";

    else if(n == 4){
        cout << 2 << " " <<4 << " " << 1 << " " << 3;
    }

    else{
        int arr[n];

        //if(n%2){
            
            int f = 1, l = n-1;
            for(int i = 0; i<n; i++){

                if( i == n-2){
                    arr[i] = n;
                }

                else{
                    if(i%2 == 0)
                        {
                            arr[i] = f;
                            f++;
                        }

                    else
                        {
                            arr[i] = l;
                            l--;
                        }
                }
            }
        //}

        for(int i =0; i<n; i++)
        cout << arr[i] << " ";
    }
}