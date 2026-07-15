#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t; 

    while(t--){
        int n;
        cin >> n;

        vector<long long> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        bool check = true;

        for(int i = 0; i < n-1; i++){
            if(a[i] < i+1){
            check = false;
            break;
            }

            a[i+1] = a[i] + a[i+1] - (i+1);
        }

        if(check && a[n-1] < n){
            check = false;
        }

        cout << (check ? "YES" : "NO") << endl;
    }
}