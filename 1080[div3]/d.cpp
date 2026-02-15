#include <iostream>
#include <vector>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<ll> f(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> f[i];
        }

        vector<ll> a(n + 1, 0);

        if (n == 2) {
            a[1] = f[2];
            a[2] = f[1];
        }
        else {
            for (int i = 2; i <= n - 1; i++) {
                a[i] = (f[i + 1] - 2 * f[i] + f[i - 1]) / 2;
            }

            ll rhs = f[1];
            for (int i = 2; i <= n - 1; i++) {
                rhs -= a[i] * (i - 1);
            }

            ll g1 = f[2] - f[1];

            ll sum_mid = 0;
            for (int i = 2; i <= n - 1; i++) {
                sum_mid += a[i];
            }

            a[n] = rhs / (n - 1);
            a[1] = g1 + sum_mid + a[n];
        }

        for (int i = 1; i <= n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}