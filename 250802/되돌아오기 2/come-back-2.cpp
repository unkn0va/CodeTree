#include <iostream>
#include <string>

using namespace std;

string commands;

int main() {
    cin >> commands;

    // Please write your code here.
    int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1}, x = 0, y = 0;
    int len = commands.length(), d = 0, index = -1;
    for (int i = 0; i < len; i++) {
        if (commands[i] == 'F') {
            x += dx[d], y += dy[d];
        }
        else if (commands[i] == 'R') {
            d = (d + 1) % 4;
        }
        else {
            d = (d + 3) % 4;
        }

        if (x == 0 && y == 0) {
            index = i+1;
            break;
        }
    }

    cout << index;

    return 0;
}