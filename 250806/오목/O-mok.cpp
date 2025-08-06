#include <iostream>

using namespace std;

int board[19][19];

int main() {
    for (int i = 0; i < 19; i++)
        for (int j = 0; j < 19; j++) cin >> board[i][j];

    // Please write your code here.
    int total = 0;
    bool find = false;
    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19; j++) {
            if (board[i][j] != 0) {
                total = 0;
                for (int k = 0; k < 5; k++) {
                    if (board[i][j+k] == board[i][j]) total++;
                    else break;

                    if (total == 5) {
                        find = true;
                        cout << board[i][j] << endl;
                        cout << i+1 << " " << j+3;
                    }
                }
                total = 0;
                for (int k = 0; k < 5; k++) {
                    if (board[i+k][j] == board[i][j]) total++;
                    else break;

                    if (total == 5) {
                        find = true;
                        cout << board[i][j] << endl;
                        cout << i+3 << " " << j+1;
                    }
                }
                total = 0;
                for (int k = 0; k < 5; k++) {
                    if (board[i+k][j+k] == board[i][j]) total++;
                    else break;

                    if (total == 5) {
                        find = true;
                        cout << board[i][j] << endl;
                        cout << i+3 << " " << j+3;
                    }
                }
                total = 0;
                if (j >= 4) {
                    for (int k = 0; k < 5; k++) {
                        if (board[i+k][j-k] == board[i][j]) total++;
                        else break;

                        if (total == 5) {
                            find = true;
                            cout << board[i][j] << endl;
                            cout << i+3 << " " << j-1;
                        }
                    }
                }
            }
        }
    }

    if (find == false) cout << 0;

    return 0;
}