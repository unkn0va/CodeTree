#include <iostream>

using namespace std;

int x1[3], y1[3];
int x2[3], y2[3];

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];
    cin >> x1[2] >> y1[2] >> x2[2] >> y2[2];

    // Please write your code here.
    int blocks[2001][2001] = {}, total = 0;
    for (int i = 0; i < 3; i++) {
        x1[i] += 1000;
        x2[i] += 1000;
        y1[i] += 1000;
        y2[i] += 1000;
    }

    for (int i = 0; i < 2; i++) {
        for (int j = x1[i]; j < x2[i]; j++) {
            for (int k = y1[i]; k < y2[i]; k++) {
                blocks[j][k] = 1;
            }
        }
    }
    for (int i = x1[2]; i < x2[2]; i++) {
        for (int j = y1[2]; j < y2[2]; j++) {
            blocks[i][j] = 0;
        }
    }

    for (int i = 0; i < 2001; i++) {
        for (int j = 0; j < 2002; j++) {
            if (blocks[i][j] == 1) total++;
        }
    }
    cout << total;
    return 0;
}