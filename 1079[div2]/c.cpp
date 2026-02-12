#include <iostream>

using namespace std;

typedef long long ll;

void solve() {
    ll p, q;
    cin >> p >> q;

    if (p % 2 == 0 && (p / 2) * 3 == q) {
        cout << "Bob\n";
    }
    else {
        cout << "Alice\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}