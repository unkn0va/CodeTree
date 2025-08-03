#include <iostream>

using namespace std;

int n;
char grid[1000][1000];
int k;

int check(char a, int b) {
    if (a == '/') {
        if (b == 0) return 1;
        else if (b == 1) return 0;
        else if (b == 2) return 3;
        else return 2;
    }
    else {
        if (b == 0) return 3;
        else if (b == 1) return 2;
        else if (b == 2) return 1;
        else return 0;
    }
}

bool inRange(int c, int d) {
    return c >= 0 && c < n && d >= 0 && d < n;
}

int main() {
    cin >> n;

    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};
    int s_x, s_y;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    cin >> k;

    // Please write your code here.
    int dir = (k - 1) / n, cnt = 0;
    if (k <= n) {
        s_x = (k-1) / n, s_y = (k-1) % n;
    }
    else if (k <= 2*n) {
        s_x = (k-1) % n, s_y = (n-1);
    }
    else if (k <= 3*n) {
        s_x = (n-1);
        if (k % n == 1) s_y = n - 1;
        else if (k % n == 0) s_y = 0;
        else s_y = (k+n-1) % n;
    }
    else {
        s_y = 0;
        if (k % n == 1) s_x = n - 1;
        else if (k % n == 0) s_x = 0;
        else s_x = (k+n-1) % n;
    }

    while (inRange(s_x, s_y)) {
        int c = check(grid[s_x][s_y], dir);
        s_x += dx[c], s_y += dy[c];
        dir = c;
        cnt++;
    }
    
    cout << cnt;
    return 0;
}