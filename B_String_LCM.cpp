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
    int mn = min(n, m);
    string c, d, e;
    int lcm = (n / __gcd(n, m)) * m;
    
    for (int i = 0; i < m; i++) {
        d += a;
    }
    
    for (int i = 0; i < n; i++) 
        e += b;
    
    
    
    if (d != e) {
        cout << -1 << endl;
        return;
    }
    for (int i = 0; i < lcm; i += mn) {
        if (n < m) {
            c += a;
        }
        else {
            c += b;
        }
    }
    cout << c << endl;
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