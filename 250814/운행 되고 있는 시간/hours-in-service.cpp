#include <iostream>
#include <climits>

using namespace std;

int N;
int A[100], B[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }

    // Please write your code here.
    int t = 0, ans = INT_MIN;
    for (int i = 0; i < N; i++) {
        int time[1001] = {};
        t = 0;
        for (int j = 0; j < N; j++) {
            if (i == j) continue;
            for (int k = A[j]; k < B[j]; k++) {
                if (time[k] == 0) {
                    time[k] = 1;
                    t++;
                }
            }
        }
        
        ans = max(ans, t);
    }

    cout << ans;

    return 0;
}