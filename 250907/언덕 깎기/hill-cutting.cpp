#include <iostream>
#include <climits>
#include <algorithm>

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
    for (int i = min_val+1; i <= max_val; i++) {
        for (int j = max_val-1; j > i; j--) {
            if (j-i > 17) continue;
            
            val = 0;
            for (int k = 0; k < N; k++) {
                if (heights[k] < i) val += (i-heights[k]) * (i-heights[k]);
                if (heights[k] > j) val += (heights[k]-j) * (heights[k]-j);
            }
            
            ans = min(val, ans);
        }
    }

    cout << ans;

    return 0;
}