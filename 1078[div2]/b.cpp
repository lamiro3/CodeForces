//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//void solve() {
//    int n;
//    long long x, y;
//    
//    cin >> n >> x >> y;
//
//    vector<long long> a(n);
//    vector<long long> con(n);
//    long long total = 0;
//
//    for (int i = 0; i < n; ++i) {
//        cin >> a[i];
//        // 각 은행이 타인에게 줄 수 있는 돈 (송금 횟수 * y)
//        con[i] = (a[i] / x) * y;
//        total += con[i];
//    }
//
//    long long ans = 0;
//    for (int i = 0; i < n; ++i) {
//        // i번째 은행을 최종 목적지로 정했을 때:
//        // (원래 내 돈) + (전체 송금 가능액 - 내 기여분)
//        long long current_total = a[i] + (total - con[i]);
//        if (current_total > ans) {
//            ans = current_total;
//        }
//    }
//
//    cout << ans << "\n";
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    int t;
//    cin >> t;
//    while (t--) {
//        solve();
//    }
//    return 0;
//}