#include <iostream>
#define MAX_VAL 200000

using namespace std;

int n;
int x[1000];
char dir[1000];
int w[MAX_VAL + 1] = {}, b[MAX_VAL + 1] = {}, g[MAX_VAL + 1] = {}, color[MAX_VAL + 1] = {};
int wc = 0, bc = 0, gc = 0;

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
                if (g[j] == 1) continue;
                else {
                    b[j]++;
                    color[j] = 2;
                }
                
                if (b[j] >= 2 && w[j] >= 2) {
                    g[j]++;
                    color[j] = 3;
                }
            }
            cur += x[i];
        }
        else {
            for (int j = cur-1; j >= cur-x[i]; j--) {
                if (g[j] == 1) continue;
                else {
                    w[j]++;
                    color[j] = 1;
                }
                
                if (b[j] >= 2 && w[j] >= 2) {
                    g[j]++;
                    color[j] = 3;
                }
            }
            cur -= x[i];
        }
    }

    for (int i = 0; i < MAX_VAL + 1; i++) {
        if (g[i] == 0 && w[i] != 0 && color[i] == 1) wc++;
        if (g[i] == 0 && b[i] != 0 && color[i] == 2) bc++;
        if (g[i] != 0) gc++;
    }
    cout << wc << " " << bc << " " << gc;
    return 0;
}