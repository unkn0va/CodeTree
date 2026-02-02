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
    if (idx_c == i_c && i_c == c) {
        if (idx_r < i_r && i_r < r) cout << abs(idx_r-r) + 1;
        else if (idx_r > i_r && i_r > r) cout << abs(idx_r-r) + 1;
        else cout << abs(idx_r-r) - 1;
    }
    else if (idx_r == i_r && i_r == r) {
        if (idx_c < i_c && i_c < c) cout << abs(idx_c-c) + 1;
        else if (idx_c > i_c && i_c > c) cout << abs(idx_c-c) + 1;
        else cout << abs(idx_c-c) - 1;
    }
    else cout << abs(idx_r-r) + abs(idx_c-c) - 1;

    return 0;
}