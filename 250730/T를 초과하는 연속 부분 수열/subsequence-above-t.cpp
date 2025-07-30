#include <iostream>
#include <algorithm>

using namespace std;

int n, t;
int arr[1000];

int main() {
    cin >> n >> t;
    int ans = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    for (int i = 0; i < n; i++) {
        if (arr[i] > t) {
            if (i == 0 || arr[i-1] > t) {
                cnt++;
            }
            else {
                cnt = 1;
            }
        }
        else {
            cnt = 0;
        }

        ans = max(cnt, ans);
    }
    if (ans == 0) cout << 0;
    else cout << ans;

    return 0;
}