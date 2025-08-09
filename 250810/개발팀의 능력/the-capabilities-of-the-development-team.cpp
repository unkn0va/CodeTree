#include <iostream>
#include <climits>

using namespace std;

int arr[5], sum1, sum2, sum3, sum = 0;

bool diff(int i, int j, int k, int l) {
    sum1 = arr[i] + arr[j];
    sum2 = arr[k] + arr[l];
    sum3 = sum - sum1 - sum2;

    if (sum1 == sum2 || sum2 == sum3 || sum1 == sum3) return false;
    return true;

}

int main() {
    bool right = false;
    int val1, val2, val3, val4, ans = INT_MAX;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    // Please write your code here.
    for (int i = 0; i < 4; i++) {
        for (int j = i+1; j < 5; j++) {
            for (int k = 0; k < 4; k++) {
                for (int l = k + 1; l < 5; l++) {
                    if (k == i || k == j || l == i || l == j) continue;

                    if (diff(i, j, k, l)) {
                        right = true;
                        val1 = max(sum1, sum2);
                        val2 = max(val1, sum3);
                        val3 = min(sum1, sum2);
                        val4 = min(val3, sum3);
                        ans = min(ans, val2-val4);
                    }
                }
            }
        }
    }

    if (right) cout << ans;
    else cout << -1;

    return 0;
}