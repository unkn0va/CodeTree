#include <iostream>

using namespace std;

int n;
char c[100];
int s[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> c[i] >> s[i];
    }

    // Please write your code here.
    int cnt = 0, score_a = 0, score_b = 0, score_c = 0;
    bool a = true, b = true, cb = true;

    for (int i = 0; i < n; i++) {
        if (c[i] == 'A') {
            score_a += s[i];
        }
        else if (c[i] == 'B') {
            score_b += s[i];
        }
        else {
            score_c += s[i];
        }

        if (score_a >= score_b && score_a >= score_c) {
            if (score_a == score_b) {
                if (score_a == score_c) {
                    if (a == false || b == false || cb == false) cnt++;
                    a = true;
                    b = true;
                    cb = true;
                }
                else {
                    if (a == false || b == false || cb == true) cnt++;
                    a = true;
                    b = true;
                    cb = false;
                }
                
            }
            else if (score_a == score_c) {
                if (a == false || cb == false || b == true) cnt++;
                a = true;
                b = false;
                cb = true;
            }
            else {
                if (a == false || b == true || cb == true) cnt++;
                a = true;
                b = false;
                cb = false;
            }
        }
        else if (score_b >= score_a && score_b >= score_c) {
            if (score_b == score_a) {
                if (score_b == score_c) {
                    if (a == false || b == false || cb == false) cnt++;
                    b = true;
                    a = true;
                    cb = true;
                }
                else {
                    if (a == false || b == false || cb == true) cnt++;
                    a = true;
                    b = true;
                    cb = false;
                }
                
            }
            else if (score_b == score_c) {
                if (a == true || b == false || cb == false) cnt++;
                a = false;
                b = true;
                cb = true;
            }
            else {
                if (a == true || b == false || cb == true) cnt++;
                a = false;
                b = true;
                cb = false;
            }
        }
        else if (score_c >= score_a && score_c >= score_b) {
            if (score_c == score_a) {
                if (score_c == score_b) {
                    if (a == false || b == false || cb == false) cnt++;
                    a = true;
                    b = true;
                    cb = true;
                }
                else {
                    if (a == false || b == true || cb == false) cnt++;
                    a = true;
                    b = false;
                    cb = true;
                }   
            }
            else if (score_c == score_b) {
                if (a == true || b == false || cb == false) cnt++;
                a = false;
                b = true;
                cb = true;
            }
            else {
                if (a == true || b == true || cb == false) cnt++;
                a = false;
                b = false;
                cb = true;
            }
        }
    }
    cout << cnt;
    
    return 0;
}