#include <iostream>

using namespace std;

int pos[3];

int main() {
    for (int i = 0; i < 3; i++) cin >> pos[i];

    // Please write your code here.
    // case 0: 원래 되어있음
    // case 1: 오름차순
    if (pos[0] < pos[1] && pos[0] < pos[2] && pos[1] < pos[2]) {
        if (pos[2] - pos[0] == 2) cout << 0;
        else if (pos[1] - pos[0] == 1 || pos[2] - pos[1] == 1) cout << 2;
        else if (pos[2] - pos[1] > 2 && pos[1] - pos[0] > 2) cout << 2;
        else cout << 1;
    }
    // case 2: 내림차순
    else if (pos[0] > pos[1] && pos[0] > pos[2] && pos[1] > pos[2]) {
        if (pos[0] - pos[2] == 2) cout << 0;
        else if (pos[0] - pos[1] == 1 || pos[1] - pos[2] == 1) cout << 2;
        else if (pos[0] - pos[1] > 2 && pos[1] - pos[2] > 2) cout << 2;
        else cout << 1;
    }
    // case 3: 6 2 9 / 9 2 6 / 6 9 3 / 9 5 7 / 6 5 9
    else {
        if (abs(pos[1] - pos[0]) == 2) cout << 1;
        else if (abs(pos[2] - pos[1]) == 2) cout << 1;
        else cout << 2;
    }
    

    return 0;
}