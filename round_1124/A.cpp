#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int k;
        cin >> k;
        int count = 1;
        for (int i = 1; i <= n-k+1; i++) {
            count=count*2;
        }
        cout<<2*(k-1)+count<<endl;
    }
    return 0;
}