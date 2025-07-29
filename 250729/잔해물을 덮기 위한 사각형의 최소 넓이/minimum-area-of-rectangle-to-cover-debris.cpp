#include <iostream>

using namespace std;

int x1[2], y1[2];
int x2[2], y2[2];

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];

    // Please write your code here.
    int blocks[2001][2001] = {}, minx = 2000, miny = 2000, maxx = 0, maxy = 0;
    bool c = false;
    for (int i = 0; i < 2; i++) {
        x1[i] += 1000;
        x2[i] += 1000;
        y1[i] += 1000;
        y2[i] += 1000;
    }

    for (int i = x1[0]; i < x2[0]; i++) {
        for (int j = y1[0]; j < y2[0]; j++) {
            blocks[i][j] = 1;
        }
    }

    for (int i = x1[1]; i < x2[1]; i++) {
        for (int j = y1[1]; j < y2[1]; j++) {
            blocks[i][j] = 0;
        }
    }

    for (int i = 0; i < 2001; i++) {
        for (int j = 0; j < 2001; j++) {
            if (blocks[i][j] == 1) {
                if (minx > i) minx = i;
                if (miny > j) miny = j;
                if (maxx < i) maxx = i;
                if (maxy < j) maxy = j;
            }
        }
    }
    cout << (maxx-minx + 1) * (maxy-miny + 1);


    return 0;
}