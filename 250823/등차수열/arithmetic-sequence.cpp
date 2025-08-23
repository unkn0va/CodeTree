#include <iostream>
#include <climits>

using namespace std;

int n;
int a[100];

int main() {
    cin >> n;
    int cnt = 0, min_val = INT_MAX, max_val = INT_MIN, ans = INT_MIN;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        min_val = min(a[i], min_val);
        max_val = max(a[i], max_val);
    }

    // Please write your code here.
    for (int i = min_val+1; i < max_val; i++) {
        int num[100] = {};
        cnt = 0;
        for (int j = 0; j < n; j++) {
            num[j] = abs(i-a[j]);
        }

        for (int j = 0; j < n-1; j++) {
            for (int k = j+1; k < n; k++) {
                if (num[j] == num[k]) {
                    cnt++;
                }
            }
        }

        ans = max(ans, cnt);
    }

    cout << ans;

    return 0;
}