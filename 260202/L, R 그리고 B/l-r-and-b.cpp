#include <iostream>

using namespace std;

char board[10][10];

int main() {
    int idx_r, idx_c, i_r, i_c, r, c;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> board[i][j];
            if (board[i][j] == 'L') {
                idx_r = i;
                idx_c = j;
            }
            else if (board[i][j] == 'R') {
                i_r = i;
                i_c = j;
            }
            else if (board[i][j] == 'B') {
                r = i;
                c = j;
            }
        }
    }

    // Please write your code here.
    cout << abs(idx_r-r) + abs(idx_c-c) - 1;

    return 0;
}