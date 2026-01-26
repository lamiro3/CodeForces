//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int t, n;
//vector<long long> a, b;
//
//int main() {
//	cin >> t;
//
//	for (int i = 0; i < t; i++) {
//		cin >> n;
//
//		a.resize(n);
//		b.resize(n + 1);
//
//		for (int j = 0; j < n; j++) cin >> a[j];
//		for (int j = 1; j <= n; j++) cin >> b[j];
//
//		// 레벨 i 까지 필요한 총 공격수
//		vector<long long> attack(n + 1, 0);
//		for (int j = 1; j <= n; j++)
//			attack[j] = attack[j - 1] + b[j];
//
//		sort(a.begin(), a.end(), greater<long long>());
//
//		long long ans = 0;
//
//		for (int k = 1; k <= n; k++) {
//			long long x = a[k - 1];
//
//			// attack[j] <= k 인 j 탐색
//			int lev = upper_bound(attack.begin(), attack.end(), k) - attack.begin()-1;
//
//			ans = max(ans, x * lev);
//		}
//		cout << ans << "\n";
//	}
//	return 0;
//}