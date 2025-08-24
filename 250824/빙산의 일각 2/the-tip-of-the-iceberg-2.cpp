#include <iostream>
#include <climits>

using namespace std;

int n;
int h[100];

int main() {
    cin >> n;
    int max_val = INT_MIN, min_val = INT_MAX;

    for (int i = 0; i < n; i++) {
        cin >> h[i];
        max_val = max(h[i], max_val);
        min_val = min(h[i], min_val);
    }

    // Please write your code here.
    int cnt = 0, ans = 0;
    bool check;
    for (int i = min_val; i <= max_val; i++) {
        cnt = 0;
        int j = 0;
        while (j < n) {
            check = false;
            while (h[j++] > i) {
                check = true;
            }
            if (check == true) cnt++;
        }
        
        ans = max(ans, cnt);
    }

    cout << ans;

    return 0;
}