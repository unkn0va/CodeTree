#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int N, B;
int P[1000];
int S[1000];

int main() {
    cin >> N >> B;

    for (int i = 0; i < N; i++) {
        cin >> P[i] >> S[i];
    }

    // Please write your code here.
    int cnt = 0, total = 0, ans = INT_MIN;
    for (int i = 0; i < N; i++) {
        int sum[1000] = {};
        for (int j = 0; j < N; j++) {
            if (i == j) {
                sum[j] = P[j]/2 + S[j];
                continue;
            }
            sum[j] = P[j] + S[j];
        }
        sort(sum, sum+N);
        total = 0, cnt = 0;
        for (int k = 0; k < N; k++) {
            total += sum[k];
            if (total > B) break;
            cnt++;
        }

        ans = max(cnt, ans);
    }

    cout << ans;

    return 0;
}