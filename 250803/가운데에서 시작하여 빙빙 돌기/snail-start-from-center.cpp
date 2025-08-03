#include <iostream>

using namespace std;

int n;
int grid[100][100];

int main() {
    cin >> n;

    // Please write your code here.
    int blocks[101][101] = {}, num = 1, dir = 3, cnt = 1;
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1}, x = n / 2, y = n / 2;
    blocks[x][y] = num++;

    for (int j = 0; j < n; j++) {
        for (int k = 0; k < cnt; k++) {
            x += dx[dir], y += dy[dir];
            blocks[x][y] = num++;
        }
        dir = (dir+3) % 4;
        for (int k = 0; k < cnt; k++) {
            x += dx[dir], y += dy[dir];
            blocks[x][y] = num++;
        }
        dir = (dir+3) % 4;
        cnt++;
    }
    
    

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << blocks[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
