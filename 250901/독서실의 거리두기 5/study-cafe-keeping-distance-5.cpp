#include <iostream>
#include <string>
#include <climits>

using namespace std;

int N;
string seat;

int main() {
    cin >> N;
    cin >> seat;

    // Please write your code here.
    int cnt = 0, ans = INT_MIN;
    for (int i = 0; i < N; i++) {
        cnt = N;
        if (seat[i]-'0' == 0) {
            seat[i] = '1';
            for (int j = 0; j < N; j++) {
                if (seat[j]-'0' == 1) {
                    for (int k = j+1; k < N; k++) {
                        if (seat[k]-'0' == 1) cnt = min(cnt, k-j);
                    }
                }
            }
            ans = max(cnt, ans);

            seat[i] = '0';
        }
    }

    cout << ans;

    return 0;
}