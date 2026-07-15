#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int result = 0;
        int count = 0;

        for (char c : s) {
            if (c == '#') {
                count++;
            } else {
                result = max(result, (count + 1) / 2);
                count = 0;
            }
        }

        result = max(result, (count + 1) / 2);

        cout << result << "\n";
    }

    return 0;
}