#include <iostream>
#include <climits>

using namespace std;

int N;
int heights[1000];

int main() {
    cin >> N;
    int min_val = INT_MAX, max_val = INT_MIN, ans = INT_MAX, val;
    for (int i = 0; i < N; i++) {
        cin >> heights[i];
        min_val = min(heights[i], min_val);
        max_val = max(heights[i], max_val);
    }

    // Please write your code here.
    for (int i = min_val; i <= max_val; i++) {
        for (int j = max_val; j >= min_val; j--) {
            if (j-i > 17) continue;
            val = (max_val-j) * (max_val-j) + (i-min_val) * (i-min_val);
            ans = min(val, ans);
        }
    }

    cout << ans;

    return 0;
}