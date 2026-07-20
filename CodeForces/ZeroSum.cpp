#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x, sum = 0;
        cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> x;
            sum += x;
        }

        if (n % 2 == 0 && sum % 4 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}