#include <iostream>

using namespace std;

int n;
char c[100];
int s[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> c[i] >> s[i];
    }

    // Please write your code here.
    int cnt = 0, a = 0, b = 0;
    bool top_a = true, top_b = true;
    for (int i = 0; i < n; i++) {
        if (c[i] == 'A') a += s[i];
        else b += s[i];

        if (a == b) {
            if (top_a && top_b) continue;
            else {
                top_a = true;
                top_b = true;
                cnt++;
            }
        }
        else if (a > b) {
            if (top_a && !top_b) continue;
            else {
                top_a = true;
                top_b = false;
                cnt++;
            }
        }
        else if (b > a) {
            if (!top_a && top_b) continue;
            else {
                top_a = false;
                top_b = true;
                cnt++;
            }
        }
    }
    cout << cnt;

    return 0;
}