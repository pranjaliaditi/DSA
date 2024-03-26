#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;

       if ((a + b) % 3 == 0 && a * 2 >= b && b * 2 >= a)
        cout << "YES \n";

        else
        cout << "NO \n";
    }
}

//1 * X + 2 * Y = A (Equation 1)
// 2 * X + 1 * Y = B (Equation 2)
// Simplifying the above equations, we get the value of X = (2 * B – A)/3 and the value of Y = (2 * A – B)/3. 
//So, to check whether it is possible to empty both the piles, 
//(2 * B – A) should be positive and divisible by 3 and (2 * A – B) should pe positive and divisible by 3.