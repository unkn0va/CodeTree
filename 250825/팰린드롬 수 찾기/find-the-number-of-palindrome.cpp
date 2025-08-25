#include <iostream>

using namespace std;

int X, Y;

int main() {
    cin >> X >> Y;

    // Please write your code here.
    int cnt = 0;
    for (int i = X; i <= Y; i++) {
        if (i < 100) {
            if (i/10 == i%10) cnt++;
        }
        else if (i < 1000) {
            if (i/100 == i%10) cnt++;
        }
        else if (i < 10000) {
            if (i/1000 == i%10 && (i%100)/10 == (i%1000)/100) cnt++;
        }
        else if (i < 100000) {
            if (i/10000 == i%10 && (i%100)/10 == (i%10000)/1000) cnt++;
        }
        else if (i < 1000000) {
            if (i/100000 == i%10 && (i%100)/10 == (i%100000)/10000
            && (i%1000)/100 == (i%10000)/1000) cnt++;
        }
    }
    cout << cnt;

    return 0;
}