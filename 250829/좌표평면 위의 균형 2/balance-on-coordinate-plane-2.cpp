#include <iostream>
#include <climits>

using namespace std;

int n;
int x[100], y[100];

int main() {
    cin >> n;

    int min_x = INT_MAX, max_x = INT_MIN;
    int min_y = INT_MAX, max_y = INT_MIN;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
        min_x = min(x[i], min_x);
        max_x = max(x[i], max_x);
        min_y = min(y[i], min_y);
        max_y = max(y[i], max_y);
    }
    
    // Please write your code here.
    int val, ans = INT_MAX;
    for (int i = min_y+1; i <= max_y+1; i+=2) {
        for (int j = min_x+1; j <= max_x+1; j+=2) {
            int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
            for (int k = 0; k < n; k++) {
                if (x[k] > j && y[k] > i) cnt1++;
                else if (x[k] < j && y[k] > i) cnt2++;
                else if (x[k] < j && y[k] < i) cnt3++;
                else cnt4++;
            }
            val = max(cnt1, cnt2);
            val = max(val, cnt3);
            val = max(val, cnt4);
            ans = min(val, ans);
        }
    }

    cout << ans;

    return 0;
}