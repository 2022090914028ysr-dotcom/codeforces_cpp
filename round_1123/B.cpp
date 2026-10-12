#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int cnt[101] = {};

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            cnt[x]++;
        }

        for (int j = 1; j <= n; j++) {
            for (int x = 100; x > 0; x--) {
                if (cnt[x] >= j) {
                    cout << x << ' ';
                }
            }
        }
        cout << '\n';
    }
    return 0;
}
