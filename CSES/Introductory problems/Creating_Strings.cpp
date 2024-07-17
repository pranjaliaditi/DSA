#include <bits/stdc++.h>
using namespace std;

vector <int> alpha(26,0);

void count (string s){
    for(int i = 0; i<s.length(); i++){
        int c = s[i] - 97;
        alpha[c]++;
    }
}

vector <vector <char>> sol;
int i = 1;

void arrange(string s){
    if(i >= s.length()){
        return;
    }
}

int main(){
    string s;
    cin >> s;
    count(s);
    arrange(s);
}