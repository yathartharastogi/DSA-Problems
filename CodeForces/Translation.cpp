#include <bits/stdc++.h>
using namespace std;

int main(){
    string t;
    string s;
    cin >> t;
    cin >> s;

    reverse(s.begin(), s.end());

    if(s == t){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

}