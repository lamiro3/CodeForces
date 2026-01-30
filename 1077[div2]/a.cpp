//#include <iostream>
//
//using namespace std;
//
//int t;
//
//int main() {
//	cin >> t;
//	while (t--) {
//		int n, newN, div;
//		cin >> n;
//		div = n / 2;
//
//		if (n % 2 == 0) {
//			newN = n - div + 1;
//			cout << div--;
//			for (int i = 2; i <= n; i++) {
//				cout << " ";
//				if (i % 2 == 0)
//					cout << newN++;
//				else
//					cout << div--;
//			}
//		} else {
//			newN = n - div;
//			cout << newN++;
//			for (int i = 2; i <= n; i++) {
//				cout << " ";
//				if (i % 2 == 1)
//					cout << newN++;
//				else
//					cout << div--;
//			}
//		}
//		cout << "\n";
//	}
//
//	return 0;
//}