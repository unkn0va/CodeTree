#include <iostream>
#include <climits>

using namespace std;

int N, L;
int a[100];

int main() {
    int max_val = INT_MIN, old, result, diff, cnt = 0;
    bool check = false;
    cin >> N >> L;

    for (int i = 0; i < N; i++) {
        cin >> a[i];
        max_val = max(a[i], max_val);
    }

    // Please write your code here.
    for (int i = max_val + 1; i >= 1; i--) {
        cnt = 0;
        for (int j = 0; j < N; j++) {
            if (a[j] >= i) cnt++;
        }
        if (cnt >= i) {
            result = i;
            break;
        }

        diff = L;
        for (int j = 0; j < N; j++) {
            if (a[j] < i) {
                if (a[j] + 1 == i) {
                    if (--diff < 0) break;
                    cnt++;
                    if (cnt >= i) {
                        result = i;
                        check = true;
                        break;
                    } 
                }
            }
        }
        if (check) break;
    }

    cout << result;

    return 0;
}