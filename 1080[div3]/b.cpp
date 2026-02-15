#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        vector<bool> visited(n + 1, false);
        bool possible = true;

        // k*i ~ 2^n*k*i 해당 원소 오름차순 정렬
        for (int i = 1; i <= n; i++) {
            if (visited[i]) continue;

            vector<int> indices;
            int cur = i;

            while (cur <= n && !visited[cur]) {
                visited[cur] = true;
                indices.push_back(cur);
                cur *= 2;
            }

            vector<int> values;
            for (int idx : indices) {
                values.push_back(a[idx]);
            }

            sort(indices.begin(), indices.end());
            sort(values.begin(), values.end());

            // 정렬된 상태와 비교
            for (int j = 0; j < indices.size(); j++) {
                if (values[j] != indices[j]) {
                    possible = false;
                    break;
                }
            }

            if (!possible) break;
        }

        cout << (possible ? "YES\n" : "NO\n");
    }

    return 0;
}
