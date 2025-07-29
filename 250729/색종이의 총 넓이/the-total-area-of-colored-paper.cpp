#include <iostream>

using namespace std;

int N;
int x[100], y[100];

int main() {
    cin >> N;
    int blocks[201][201] = {}, total = 0;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
        x[i] += 100;
        y[i] += 100;
    }

    // Please write your code here.
    for (int i = 0; i < N; i++) {
        for (int j = x[i]; j < x[i] + 8; j++) {
            for (int k = y[i]; k < y[i] + 8; k++) {
                blocks[j][k] = 1;
            }
        }
    }

    for (int i = 0; i < 201; i++) {
        for (int j = 0; j < 201; j++) {
            if (blocks[i][j] == 1) total++;
        }
    }
    cout << total;

    return 0;
}