#include <iostream>

using namespace std;

int n;
int x1[10], y1[10];
int x2[10], y2[10];

int main() {
    cin >> n;
    int blocks[201][201] = {}, total = 0;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        x1[i] += 100;
        x2[i] += 100;
        y1[i] += 100;
        y2[i] += 100; 
    }

    // Please write your code here.
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = x1[i]; j < x2[i]; j++) {
                for (int k = y1[i]; k < y2[i]; k++) {
                    blocks[j][k] = 1;
                }
            }
        }
        else {
            for (int j = x1[i]; j < x2[i]; j++) {
                for (int k = y1[i]; k < y2[i]; k++) {
                    blocks[j][k] = 2;
                }
            }
        }
    }

    for (int i = 0; i < 201; i++) {
        for (int j = 0; j < 201; j++) {
            if (blocks[i][j] == 2) total++;
        }
    }

    cout << total;
    return 0;
}