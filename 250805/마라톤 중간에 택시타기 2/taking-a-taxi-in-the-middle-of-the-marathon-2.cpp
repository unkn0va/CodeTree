#include <iostream>
#include <climits>

using namespace std;

int n;
int x[100];
int y[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    int dis = 0, ans = INT_MAX;
    for (int i = 1; i < n-1; i++) {
        dis = 0;
        for (int j = 0; j < n-1; j++) {
            if (i == j+1) {
                dis += abs(x[j+2]-x[j]) + abs(y[j+2]-y[j]);
                j += 1;
                continue;
            }
            dis += abs(x[j+1]-x[j]) + abs(y[j+1]-y[j]);
        }
        ans = min(dis, ans);
    }

    cout << ans;
    return 0;
}