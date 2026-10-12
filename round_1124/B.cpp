#include <bits/stdc++.h>
using namespace std;

int change(int x) {
    int sum = 0;

    while (x > 0) {
        int d = x % 10;
        sum += d * d;
        x /= 10;
    }

    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> s(n);

        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        for (int i = 0; i < n; i++) {
            for (int k = 0; k < 1000; k++) {
                s[i] = change(s[i]);
            }
        }

        long long count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (s[i] == s[j]) {
                    count++;
                }
            }
        }

        cout << count << '\n';
    }

    return 0;
}
