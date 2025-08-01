#include <iostream>

using namespace std;

int n, t;
int r, c;
char d;

int mv(char dir) {
    if (dir == 'U') return 0;
    else if (dir == 'D') return 3;
    else if (dir == 'R') return 1;
    else return 2;
}

char dir(char n) {
    if (n == 0) return 'U';
    else if (n == 1) return 'R';
    else if (n == 2) return 'L';
    else return 'D';
}

bool inRange(int x, int y) {
    return (0 <= x && x < n && y >= 0 && y < n);
}

int main() {
    cin >> n >> t;
    cin >> r >> c >> d;
    int ax = r, ay = c, x = r, y = c;

    int dx[4] = {-1, 0, 0, 1}, dy[4] = {0, 1, -1, 0};

    // Please write your code here.
    for (int i = 0; i < t; i++) {
        int num = mv(d);
        ax += dx[num], ay += dy[num];
        if (!inRange(ax, ay)) {
            num = 3 - num;
            d = dir(num);
            x += dx[num];
            y += dy[num];
        }
            
        x += dx[num], y += dy[num];
        
    }

    cout << x << " " << y;

    return 0;
}