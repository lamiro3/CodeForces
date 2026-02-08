//#include <iostream>
//#include <vector>
//#include <string>
//#include <bitset>
//#include <algorithm>
//
//using namespace std;
//const int MAX_SUM = 300005;
//
//void solve() {
//    int n, m;
//    if (!(cin >> n >> m)) return;
//
//    vector<vector<int>> grid(n, vector<int>(m));
//    int total_sum = 0;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            cin >> grid[i][j];
//            total_sum += grid[i][j];
//        }
//    }
//    vector<vector<int>> col_sum(m, vector<int>(n + 1, 0));
//    for (int j = 0; j < m; j++) {
//        for (int i = n - 1; i >= 0; i--) {
//            col_sum[j][i] = col_sum[j][i + 1] + grid[i][j];
//        }
//    }
//
//    vector<vector<bitset<MAX_SUM>>> dp(n + 1, vector<bitset<MAX_SUM>>(m + 1));
//
//    dp[0][0][0] = 1; // Ω√¿€¡°
//
//    for (int i = 0; i <= n; i++) {
//        for (int j = 0; j <= m; j++) {
//            if (!dp[i][j].any()) continue;
//
//            // down ('D')
//            if (i < n) {
//                dp[i + 1][j] |= dp[i][j];
//            }
//            // right ('R')
//            if (j < m) {
//                dp[i][j + 1] |= (dp[i][j] << col_sum[j][i]);
//            }
//        }
//    }
//
//    // find max
//    long long max_prod = -1;
//    int best_a = 0;
//    for (int a = 0; a <= total_sum; a++) {
//        if (dp[n][m][a]) {
//            long long current_prod = (long long)a * (total_sum - a);
//            if (current_prod > max_prod) {
//                max_prod = current_prod;
//                best_a = a;
//            }
//        }
//    }
//
//    cout << max_prod << "\n";
//
//    // Backtracking
//    string path = "";
//    int cur_i = n, cur_j = m, cur_a = best_a;
//    while (cur_i > 0 || cur_j > 0) {
//        if (cur_i > 0 && dp[cur_i - 1][cur_j][cur_a]) {
//            path += 'D';
//            cur_i--;
//        }
//        else {
//            path += 'R';
//            cur_j--;
//            cur_a -= col_sum[cur_j][cur_i];
//        }
//    }
//    reverse(path.begin(), path.end());
//    cout << path << "\n";
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    int t;
//    cin >> t;
//    while (t--) {
//        solve();
//    }
//    return 0;
//}