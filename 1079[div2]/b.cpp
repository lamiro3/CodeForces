//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//bool solve() {
//    int n;
//    cin >> n;
//
//    vector<int> p(n), pos_p(n + 1);
//
//    for (int i = 0; i < n; i++) {
//        cin >> p[i];
//        pos_p[p[i]] = i;
//    }
//
//    vector<int> a(n);
//    vector<int> b; // 중복 제거
//
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//
//        if (b.empty() || b.back() != a[i]) {
//            b.push_back(a[i]);
//        }
//    }
//
//    for (int i = 0; i + 1 < b.size(); i++) {
//        if (pos_p[b[i]] > pos_p[b[i + 1]]) { // 상대 순서가 a와 다르다면
//            return false;
//        }
//    }
//
//    return true;
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int t;
//    cin >> t;
//    while (t--) {
//        cout << (solve() ? "YES" : "NO") << "\n";
//    }
//    return 0;
//}