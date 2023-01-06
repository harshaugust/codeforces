#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353
#define int long long
#define rep(i, n) for(int i = 0; i < n; ++i)
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define vi vector<int>
#define pii pair<int,int>
const int N=1e5+11;
/* 
*/
void solve() {
    string a, b;
    cin >> a >> b;
    int n = a.size();
    int m = b.size();
    if (n < m) {
        if (m % n == 0) {
            for (int i = 0; i < m; i += n) {
                string s = "";
                for (int j = i; j < i + n; j++) 
                    s += b[j];
                if (s == a) 
                    continue;
                else {
                    cout << -1 << endl;
                    return;
                }
            }
            cout << b << endl;
            return;
        }
        else {
            int k = m * n;
            k /= n;
            string s = "";
            for (int i = 0; i < k; i++) {
                s += a;
            }
            int i = 0;
            while (i < s.size()) {
                int j = i;
                string t="";
                for (; j <= i + n; j++) {
                    t += s[j];
                }
                i += j;
                if (t == b) {
                    continue;
                }
                else {
                    cout << -1 << endl;
                }
            }
            cout << s << endl;
        }
    }
    else {
        if (n % m == 0) {
            for (int i = 0; i < n; i += m) {
                string s = "";
                for (int j = i; j < i + m; j++) 
                    s += a[j];
                if (s == b) 
                    continue;
                else {
                    cout << -1 << endl;
                    return;
                }
            }
            cout << a << endl;
            return;
        }
        else {
            int k = m * n;
            k /= m;
            string s = "";
            for (int i = 0; i < k; i++) {
                s += a;
            }

            int i = 0;
            while (i < s.size()) {
                int j = i;
                string t="";
                for (; j <= i + n; j++) {
                    t += s[j];
                }
                i += j;
                if (t == a) {
                    continue;
                }
                else {
                    cout << -1 << endl;
                    return;
                }
            }
            cout << s << endl;
            return;
        }
    }
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
// #ifndef ONLINE_JUDGE    
//     freopen("input.txt", "r", stdin); 
//     freopen("output.txt", "w", stdout);
    
// #endif
    int t;
    cin >> t;
    // t = 1;
    for (int i = 1; i <= t; i++) {
        // cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}