//#include <iostream>
//using namespace std;
//
//long long digit_sum(long long n) {
//    long long s = 0;
//    while (n) {
//        s += n % 10;
//        n /= 10;
//    }
//    return s;
//}
//
//int main() {
//    int t;
//    cin >> t;
//
//    while (t--) {
//        long long x;
//        cin >> x;
//
//        int count = 0;
//
//        for (long long y = x + 1; y <= x + 90; y++) {
//            if (y - digit_sum(y) == x)
//                count++;
//        }
//
//        cout << count << endl;
//    }
//
//    return 0;
//}
