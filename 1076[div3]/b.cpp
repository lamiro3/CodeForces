//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int t;
//vector<int> p;
//
//void getAns(int tgt, int start, int end) {
//	int maxi = -1;
//
//	if (tgt == 0) return;
//
//	for (int i = start; i <= end; i++) {
//		if (p[i] == tgt) {
//			maxi = i;
//			break;
//		}
//	}
//
//	if (maxi != start) {
//		reverse(p.begin() + start, p.begin() + maxi + 1);
//		return;
//	}
//
//	else
//		getAns(tgt - 1, start + 1, end);
//}
//
//int main() {
//	cin >> t;
//
//	for (int i = 0; i < t; i++) {
//		int n, mi = 0, si = 0;
//
//		cin >> n;
//		p.resize(n);
//
//		for (int j = 0; j < n; j++)
//			cin >> p[j];
//
//		getAns(n, 0, n - 1);
//
//		for (int j = 0; j < n; j++)
//			cout << p[j] << " ";
//		cout << "\n";
//	}
//
//	return 0;
//}