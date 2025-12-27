#include <iostream>

using namespace std;

int n;
int a[10], b[10], c[10];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i] >> c[i];

    // Please write your code here.
    int value = 0, cnt = 0;
    for (int i = 1; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            for (int k = 0; k < 9; k++) {
                if (j == i || k == i || k == j) continue;
                
                bool check = true;
                for (int t = 0; t < n; t++) {
                    int f_cnt = 0, s_cnt = 0;
                    
                    if (i == a[t] / 100) f_cnt++;
                    else if (i == (a[t] % 100) / 10 || i == (a[t] % 10)) s_cnt++;

                    if (j == (a[t] % 100) / 10) f_cnt++;
                    else if (j == a[t] / 100 || j == (a[t] % 10)) s_cnt++;

                    if (k == (a[t] % 10)) f_cnt++;
                    else if (k == a[t] / 100 || k == (a[t] % 100) / 10) s_cnt++;

                    if (f_cnt != b[t] || s_cnt != c[t]) check = false; 
                }

                if (check == true) cnt++;
            }
        }
    }

    cout << cnt;
 
    return 0;
}