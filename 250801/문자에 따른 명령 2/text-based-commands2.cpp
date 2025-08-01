#include <iostream>
#include <string>

using namespace std;

string dirs;

int main() {
    cin >> dirs;
    int d = 0, x = 0, y = 0;
    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
    // Please write your code here.
    int len = dirs.length();
    for (int i = 0; i < len; i++) {
        if (dirs[i] == 'L') {
            d = (d + 3) % 4;
        }
        else if (dirs[i] == 'R') {
            d = (d + 1) % 4;
        }
        else if (dirs[i] == 'F') {
            x += dx[d];
            y += dy[d];
        }
    }

    cout << x << " " << y;
    return 0;
}