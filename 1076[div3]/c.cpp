//#include <iostream>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//int t, n, q;
//vector<int> a, b;
//
//int main() {
//	cin >> t;
//
//	for (int i = 0; i < t; i++) {
//		int l, r;
//		cin >> n >> q;
//
//		a.resize(n+1);
//		b.resize(n+1);
//
//		for (int j = 1; j <= n; j++) cin >> a[j];
//		for (int j = 1; j <= n; j++) cin >> b[j];
//
//		vector<long long> best(n + 2, 0);
//
//		for (int j = n; j >= 1; j--) {
//			best[j] = max((long long)max(b[j], a[j]), best[j + 1]);
//		}
//
//		vector<long long> sums(n + 1, 0);
//		for (int j = 1; j <=n; j++) {
//			sums[j] = sums[j - 1] + best[j];
//		}
//
//		while (q--) {
//			int l, r;
//			cin >> l >> r;
//
//			cout << sums[r] - sums[l - 1] << " ";
//		}
//		cout << "\n";
//	}
//
//	return 0;
//}