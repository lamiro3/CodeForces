//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int t;
//	cin >> t;
//
//	while (t--) {
//		long n, k;
//		cin >> n >> k;
//
//		vector<long> bitMask(n, 0);
//		for (int i = 0; i < k; i++) {
//			string s;
//			cin >> s;
//
//			for (int j = 0; j < n; j++) {
//				// a: 1, b: 10, c: 100 ...(bin)
//				bitMask[j] |= (1 << (s[j] - 'a'));
//			}
//		}
//		
//		//get Factors of n
//		vector<long> factors;
//		long sqrtn = sqrtl(n);
//
//		for (long i = 1; i <= sqrtn; i++) {
//			if (n % i == 0) {
//				factors.push_back(i);
//				if (i * i != n)
//					factors.push_back(n / i);
//			}
//
//		}
//
//		sort(factors.begin(), factors.end());
//
//		for (long f : factors) {
//			bool isPoss = true;
//			string ans = "";
//
//			for (long j = 0; j < f; j++) {
//				long standard = (1 << 26) - 1; // all of bit = 1
//				for (long k = j; k < n; k += f) {
//					standard &= bitMask[k];
//				}
//
//				if (standard == 0) {
//					isPoss = false;
//					break;
//				}
//				
//				for (long bit = 0; bit < 26; bit++) {
//					if ((standard >> bit) & 1) {
//						ans += (char)('a' + bit);
//						break;
//					}
//				}
//			}
//
//			if (isPoss) {
//				for (long i = 0; i < n / f; i++) {
//					cout << ans;
//				}
//				cout << "\n";
//				break;
//			}
//		}
//	}
//
//	return 0;
//}