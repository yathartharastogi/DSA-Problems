#include <bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin >> n;
    int orignal = n;
    bool res = true;
    while (n > 0) {
        int digit = n % 10;
        if (digit != 4 && digit != 7) {
            res = false;
            break;
        }
        n /= 10;
    }

    vector<int> lucky  = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};

    for(int x : lucky){
        if(orignal % x == 0){
            res = true;
            break;
        }
        else{
            res = false;
        }
    }

    if(res){
        cout << "YES"; 
    }
    else{ 
        cout << "NO";
    }
}