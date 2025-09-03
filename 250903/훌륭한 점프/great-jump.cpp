#include <iostream>
#include <climits>

using namespace std;

int n, k;
int arr[100];

bool isPossible(int max_val) {
    int cnt  = 0;
    int val[100] = {};

    for (int j = 0; j < n; j++) {
        if (max_val >= arr[j]) {
            val[cnt++] = j;
        }
    }

    for (int j = 1; j <= cnt; j++) {
        int dist = val[j] - val[j-1];
        if (dist > k) return false;
    }

    return true;
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int ans = INT_MAX;
    for (int i = n; i >= max(arr[0], arr[n-1]); i--) {
        if (isPossible(i)) ans = min(ans, i);
    }

    cout << ans;

    return 0;
}