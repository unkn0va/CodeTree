#include <iostream>
#include <climits>

using namespace std;

int n, k;
int arr[100];

int main() {
    cin >> n >> k;
    int min_val = INT_MAX, max_val = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        min_val = min(arr[i], min_val);
        max_val = max(arr[i], max_val);
    }

    // Please write your code here.
    int ans = INT_MAX, cost;
    for (int i = min_val; i <= max_val; i++) {
        for (int j = max_val; j >= i+k; j--) {
            if (j-i > k) continue;
            cost = 0;

            for (int k = 0; k < n; k++) {
                if (arr[k] > j) cost += arr[k]-j;
                if (arr[k] < i) cost += i-arr[k];
            }

            ans = min(ans, cost);
        }
    }

    cout << ans;


    return 0;
}