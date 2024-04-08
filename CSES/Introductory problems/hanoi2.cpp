#include <bits/stdc++.h>
using namespace std;
vector <pair<char,char>> seq;

void hanoi (int n, char from, char to, char use ){
    if(n == 0){
        return;
    }

    hanoi(n-1,from,use,to);
    seq.push_back(make_pair(from,to));
    hanoi(n-1,use,to,from);

}
int main (){
    int n;
    cin >> n;
    hanoi (n,'1','3','2');

    cout << seq.size() << "\n";

    for(int i = 0; i<seq.size(); i++)
    cout << seq[i].first << " " << seq[i].second << "\n";
}

// n-1, A to B using C
// N A to C
// n-1 B to C using A