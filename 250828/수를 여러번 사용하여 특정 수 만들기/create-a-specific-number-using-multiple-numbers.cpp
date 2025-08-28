#include <iostream>
#include <climits>

using namespace std;

int A, B, C;

int main() {
    cin >> A >> B >> C;

    // Please write your code here.
    int n = C/A, m = C/B;
    int val, ans = INT_MIN;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            val = A*i + B*j;
            if (val <= C) {
                ans = max(val, ans);
            }
        }
    }

    cout << ans;

    return 0;
}