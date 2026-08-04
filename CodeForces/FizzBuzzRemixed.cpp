#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long ans = (n / 15) * 3;
        ans += min(3LL, n % 15 + 1);

        cout << ans << '\n';
    }
}