#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int N, B;
int P[1000];

int main() {
    cin >> N >> B;

    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }

    // Please write your code here.
    sort(P, P+N);
 
    int total = 0, ans = INT_MIN;
    for (int i = 0; i < N; i++) {
        total = 0;
        total += P[i]/2;
        if (total > B) continue;
        int cnt = 1;
        for (int j = 0; j < N; j++) {
            if (i == j) continue;
            
            total += P[j];
            if (total > B) {
                total -= P[j];
                continue;
            }
            cnt++;
        }
        ans = max(cnt, ans);
    }

    cout << ans;

    return 0;
}