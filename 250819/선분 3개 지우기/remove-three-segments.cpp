#include <iostream>

using namespace std;

int n;
int o[10], r[10];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> o[i] >> r[i];
    }

    // Please write your code here.
    int cnt = 0;
    bool check = true;
    for (int i = 0; i < n-2; i++) {
        for (int j = i+1; j < n-1; j++) {
            for (int k = j+1; k < n; k++) {
                check = true;
                int count[101] = {};
                for (int l = 0; l < n; l++) {
                    if (l == i || l == j || l == k) continue;
                    
                    for (int t = o[l]; t <= r[l]; t++) {
                        count[t]++;
                    }                    
                }

                for (int t = 0; t < 101; t++) {
                    if (count[t] > 1) {
                        check = false;
                        break;
                    }
                }

                if (check == true) cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}