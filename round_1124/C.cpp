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
        int k;
        cin >> k;
        int k1 = k - 1;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        long long count = 0;
        while (v.size() >= k) {
            int m = v.size();
            // cout << v[k1] << ' ' << v[m - k1 - 1] << endl;
            if (v[k1] >= v[m - k1 - 1]) {
                count = count + v[k1];
                v.erase(v.begin() + k1);
            } else {
                count = count + v[m - k1 - 1];
                v.erase(v.begin() + m - k1 - 1);
            }
        }
        cout << count << endl;
    }
    return 0;
}
