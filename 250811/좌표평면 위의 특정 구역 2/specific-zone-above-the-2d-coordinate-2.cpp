#include <iostream>
#include <climits>

using namespace std;

int N;
int x[100], y[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    int max_x, max_y, min_x, min_y, val, ans = INT_MAX;
    for (int i = 0; i < N; i++) {
        max_x = INT_MIN, max_y = INT_MIN, min_x = INT_MAX, min_y = INT_MAX;
        for (int j = 0; j < N; j++) {
            if (i == j) continue;
            max_x = max(max_x, x[j]);
            max_y = max(max_y, y[j]);
            min_x = min(min_x, x[j]);
            min_y = min(min_y, y[j]);
        }
        val = (max_x - min_x) * (max_y - min_y);
        ans = min(ans, val);
    }

    cout << ans;

    return 0;
}