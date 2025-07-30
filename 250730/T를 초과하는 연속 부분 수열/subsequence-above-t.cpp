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
        if (arr[0] > t || (arr[i] > t && arr[i-1] < arr[i])) {
            cnt++;
        }
        else if (arr[i] < t) {
            cnt = 0;
        }
        else {
            cnt = 1;
        }

        ans = max(cnt, ans);
    }

    cout << ans;

    return 0;
}