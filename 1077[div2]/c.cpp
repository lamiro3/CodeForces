//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//bool check(int k, int n, const vector<int>& a, const vector<int>& b, int mn, int mx) {
//    for (int i = 0; i < n; i++) {
//        if (a[i] != b[i]) {
//            if (a[i] - mn < k && mx - a[i] < k) return false;
//        }
//    }
//    return true;
//}
//
//void solve() {
//    int n;
//    cin >> n;
//    vector<int> a(n);
//    int mn = 2e9, mx = -2e9;
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//        mn = min(mn, a[i]);
//        mx = max(mx, a[i]);
//    }
//
//    vector<int> b = a;
//    sort(b.begin(), b.end());
//
//    int low = 0, high = 1e9, ans = 0;
//    while (low <= high) {
//        int mid = low + (high - low) / 2;
//        if (check(mid, n, a, b, mn, mx)) {
//            ans = mid;
//            low = mid + 1;
//        }
//        else {
//            high = mid - 1;
//        }
//    }
//    cout << ans << endl;
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    int t;
//    cin >> t;
//    while (t--) {
//        solve();
//    }
//    return 0;
//}