#include <iostream>
#include <climits>

using namespace std;

int N;
int pos[100];
char alpha[100];

int main() {
    cin >> N;

    char placed[101] = {};
    int max_val = INT_MIN, min_idx, max_idx, cnt1 = 0, cnt2 = 0;
    int total, ans = INT_MIN;

    for (int i = 0; i < N; i++) {
        cin >> pos[i] >> alpha[i];
        placed[pos[i]] = alpha[i];
        max_val = max(pos[i], max_val);
    }

    // Please write your code here.
    for (int i = 0; i <= max_val; i++) {
        for (int j = i; j <= max_val; j++) {
            min_idx = INT_MAX, max_idx = INT_MIN;
            cnt1 = 0, cnt2 = 0;
            for (int k = i; k <= j; k++) {
                if (placed[k] == 'G') {
                    min_idx = min(k, min_idx);
                    max_idx = max(k, max_idx);
                    cnt1++;
                }
                else if (placed[k] == 'H') {
                    min_idx = min(k, min_idx);
                    max_idx = max(k, max_idx);
                    cnt2++;
                }
            }
            if ((cnt1 == 0 || cnt2 == 0) && N == 1) {
                total = 0;
            }
            else if (cnt1 == 0 || cnt2 == 0) {
                total = max_idx - min_idx;
            }
            else if (cnt1 == cnt2) {
                total = max_idx - min_idx;
            }
            
            ans = max(total, ans);

        }
    }
    cout << ans;
    return 0;
}