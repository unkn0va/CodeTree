#include <iostream>
#include <climits>

using namespace std;

int n, m;
int a[100], b[100];

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a[i] >> b[i];
    }

    // Please write your code here.
    int cnt = 0, ans = INT_MIN;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j) continue;
            cnt = 0;
            for (int k = 0; k < m; k++) {
                if (a[k] == i && b[k] == j) cnt++;
                else if (a[k] == j && b[k] == i) cnt++;
            }

            ans = max(cnt, ans);
        }
    }

    cout << ans;

    return 0;
}