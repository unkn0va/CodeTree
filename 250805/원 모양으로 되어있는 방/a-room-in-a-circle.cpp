#include <iostream>
#include <climits>

using namespace std;

int n;
int a[1003];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Please write your code here.
    int total = 0, ans = INT_MAX; 
    for (int i = 0; i < n; i++) {
        total = 0;
        for (int j = 1; j < n; j++) {
            total += (a[(i+j) % n] * j);
        }
        ans = min(ans, total);
    }
    cout << ans;
    return 0;
}