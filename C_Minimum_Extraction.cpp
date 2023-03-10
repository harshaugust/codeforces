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
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    sort(all(a));
    int res = a[0];
    int sub = a[0];
    for (int i = 1; i < n; i++) {
        a[i] -= sub;
        res = max(res, a[i]);
        sub += a[i];
    }
    cout << res << endl;
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