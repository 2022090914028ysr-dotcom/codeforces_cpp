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
        char c;
        cin >> c;
        string str;
        cin >> str;
        int count = 0;
        for (int i = 0; i < (n/2); i++) {
            if (str[i] != str[str.size() - 1 - i]) {
                if (str[i]!=c) {
                    count++;
                }
                if (str[str.size() - 1 - i]!=c) {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
