#include <iostream>

using namespace std;

int X, Y;

int n(int a) {
    if (a < 1000) return 3;
    else if (a < 10000) return 4;
    else if (a < 100000) return 5;
    else if (a < 1000000) return 6;
    else return 7;
}
 
int main() {
    cin >> X >> Y;

    // Please write your code here.
    int cnt = 0, num, total = 0;
    bool check;
    for (int i = X; i <= Y; i++) {
        num = i;
        cnt = 0;
        int number[10] = {};
        for (int j = 0; j < n(i); j++) {
            if (num < 10) number[num]++;
            else number[num%10]++;
            num /= 10;
        }

        for (int k = 0; k < 10; k++) {
            if (number[k] != 0) cnt++;
        }

        if (cnt != 2) continue;

        check = false;

        for (int k = 0; k < 10; k++) {
            if (number[k] == 1 && check == false) {
                check = true;
            }
            else if (number[k] == 1 && check == true) {
                check = false;
                break;
            }
        }

        if (check == true) total++;
        
    }

    cout << total;

    return 0;
}