#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const long long INF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        vector<vector<long long>> dp(n + 1, vector<long long>(7, INF));

        // 초기값
        for (int x = 1; x <= 6; x++) {
            dp[1][x] = (a[1] == x ? 0 : 1);
        }

        for (int i = 2; i <= n; i++) {
            for (int x = 1; x <= 6; x++) {
                for (int y = 1; y <= 6; y++) {

                    // 인접 조건시 PASS
                    if (x == y) continue;
                    if (x + y == 7) continue;

                    dp[i][x] = min(dp[i][x],
                        dp[i - 1][y] + (a[i] != x));
                }
            }
        }

        long long ans = INF;

        for (int x = 1; x <= 6; x++)
            ans = min(ans, dp[n][x]);

        cout << ans << "\n";
    }
}
