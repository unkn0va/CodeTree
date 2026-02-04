#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int n;
int arr[100000];

int main() {
    cin >> n;
    int ans = 0;
    int max_v = INT_MIN, min_v = INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        max_v = max(arr[i], max_v);
        min_v = min(arr[i], min_v);
    }

    // Please write your code here.
    if (max_v <= 0) {
        if (max_v == 0) ans = 0;
        else {
            sort(arr, arr+n);
            ans = arr[n-1] * arr[n-2] * arr[n-3];
        }
    }
    else if (min_v >= 0) {
        sort(arr, arr+n);
        if (min_v == 0) ans = arr[1] * arr[2] * arr[3];
        else ans = arr[0] * arr[1] * arr[2];
    }
    else {
        sort(arr, arr+n);
        if (arr[0] * arr[1] > arr[n-2] * arr[n-3]) ans = max_v * arr[0] * arr[1];
        else ans = max_v * arr[n-2] * arr[n-3];
    }
    cout << ans;

    return 0;
}