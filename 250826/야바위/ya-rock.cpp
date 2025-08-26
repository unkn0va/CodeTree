#include <iostream>
#include <climits>

using namespace std;

int N;
int a[100], b[100], c[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    // Please write your code here.
    int ans = INT_MIN, cnt = 0;
    for (int i = 1; i <= 3; i++) {
        int num = i;
        cnt = 0;
        for (int j = 0; j < N; j++) {
            if (a[j] == num) num = b[j];
            else if (b[j] == num) num = a[j];

            if (c[j] == num) cnt++;
        }

        ans = max(cnt, ans);
    }

    cout << ans;

    return 0;
}