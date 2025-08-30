#include <iostream>
#include <string>

using namespace std;

string inp[3];

int main() {
    for (int i = 0; i < 3; i++) cin >> inp[i];

    // Please write your code here.
    int cnt = 0;
    bool check = false;
    for (int i = 1; i <= 9; i++) {
        for (int j = i+1; j <= 9; j++) {
            check = false;
            if (inp[0][0]-'0' == i || inp[0][0]-'0' == j) {
                if (inp[0][1]-'0' == i || inp[0][1]-'0' == j) {
                    if (inp[0][2]-'0' == i || inp[0][2]-'0' == j) {
                        if (inp[0][0]-'0' + inp[0][1]-'0' + inp[0][2]-'0' != 3*i && inp[0][0]-'0' + inp[0][1]-'0' + inp[0][2]-'0' != 3*j) check = true;
                    }
                }
                if (inp[1][0]-'0' == i || inp[1][0]-'0' == j) {
                    if (inp[2][0]-'0' == i || inp[2][0]-'0' == j) {
                        if (inp[0][0]-'0' + inp[1][0]-'0' + inp[2][0]-'0' != 3*i && inp[0][0]-'0' + inp[1][0]-'0' + inp[2][0]-'0' != 3*j) check = true;
                    }
                }
                if (inp[1][1]-'0' == i || inp[1][1]-'0' == j) {
                    if (inp[2][2]-'0' == i || inp[2][2]-'0' == j) {
                        if (inp[0][0]-'0' + inp[1][1]-'0' + inp[2][2]-'0' != 3*i && inp[0][0]-'0' + inp[1][1]-'0' + inp[2][2]-'0' != 3*j) check = true;
                    }
                }
            }
            if (inp[0][1]-'0' == i || inp[0][1]-'0' == j) {
                if (inp[1][1]-'0' == i || inp[1][1]-'0' == j) {
                    if (inp[2][1]-'0' == i || inp[2][1]-'0' == j) {
                        if (inp[0][1]-'0' + inp[1][1]-'0' + inp[2][1]-'0' != 3*i && inp[0][1]-'0' + inp[1][1]-'0' + inp[2][1]-'0' != 3*j) check = true;
                    }
                }
            }
            if (inp[0][2]-'0' == i || inp[0][2]-'0' == j) {
                if (inp[1][2]-'0' == i || inp[1][2]-'0' == j) {
                    if (inp[2][2]-'0' == i || inp[2][2]-'0' == j) {
                        if (inp[0][2]-'0' + inp[1][2]-'0' + inp[2][2]-'0' != 3*i && inp[0][2]-'0' + inp[1][2]-'0' + inp[2][2]-'0' != 3*j) check = true;
                    }
                }
                if (inp[1][1]-'0' == i || inp[1][1]-'0' == j) {
                    if (inp[2][0]-'0' == i || inp[2][0]-'0' == j) {
                        if (inp[0][2]-'0' + inp[1][1]-'0' + inp[2][0]-'0' != 3*i && inp[0][2]-'0' + inp[1][1]-'0' + inp[2][0]-'0' != 3*j) check = true;
                    }
                }
            }
            if (inp[1][0]-'0' == i || inp[1][0]-'0' == j) {
                if (inp[1][1]-'0' == i || inp[1][1]-'0' == j) {
                    if (inp[1][2]-'0' == i || inp[1][2]-'0' == j) {
                        if (inp[1][0]-'0' + inp[1][1]-'0' + inp[1][2]-'0' != 3*i && inp[1][0]-'0' + inp[1][1]-'0' + inp[1][2]-'0' != 3*j) check = true;
                    }
                }
            }
            if (inp[2][0]-'0' == i || inp[2][0]-'0' == j) {
                if (inp[2][1]-'0' == i || inp[2][1]-'0' == j) {
                    if (inp[2][2]-'0' == i || inp[2][2]-'0' == j) {
                        if (inp[2][0]-'0' + inp[2][1]-'0' + inp[2][2]-'0' != 3*i && inp[2][0]-'0' + inp[2][1]-'0' + inp[2][2]-'0' != 3*j) check = true;
                    }
                }
            }

            if (check == true) cnt++;
        }
    }

    cout << cnt;

    return 0;
}