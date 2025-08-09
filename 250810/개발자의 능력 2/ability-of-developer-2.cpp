#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int ability[6];

int main() {
    int sum = 0;
    for (int i = 0; i < 6; i++) {
        cin >> ability[i];
        sum += ability[i];
    }

    // Please write your code here.
    int sum1, sum2, sum3, val1, val2, val3, val4, val, ans = INT_MAX;
    for (int i = 0; i < 5; i++) {
        for (int j = i+1; j < 6; j++) {
            for (int k = 0; k < 5; k++) {
                for (int l = k+1; l < 6; l++) {
                    if (k == i || k == j || l == i || l == j) continue;
                    else {
                        sum1 = ability[i] + ability[j];
                        sum2 = ability[k] + ability[l];
                        sum3 = sum - sum1 - sum2;
                        val1 = max(sum1, sum2);
                        val2 = max(val1, sum3);
                        val3 = min(sum1, sum2);
                        val4 = min(val3, sum3);
                        val = val2 - val4;
                        ans = min(ans, val);
                    }
                }
            }
        }
    }

    cout << ans;

    return 0;
}