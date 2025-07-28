#include <iostream>
#define MAX_VAL 200000

using namespace std;

int n;
int x[1000];
char dir[1000];
int color[MAX_VAL + 1] = {};
int wc = 0, bc = 0;

int main() {
    cin >> n;
    int cur = 100000;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }

    // Please write your code here.
    for (int i = 0; i < n; i++) {
        if (dir[i] == 'R') {
            for (int j = cur; j < cur + x[i]; j++) {
                color[j] = 2;
            }
            cur = cur + x[i] - 1;
        }
        else {
            for (int j = cur; j > cur - x[i]; j--) {
                color[j] = 1;
            }
            cur = cur - x[i] + 1;
        }
    }

    for (int i = 0; i < MAX_VAL + 1; i++) {
        if (color[i] == 1) wc++;
        if (color[i] == 2) bc++;
    }
    cout << wc << " " << bc;

    return 0;
}