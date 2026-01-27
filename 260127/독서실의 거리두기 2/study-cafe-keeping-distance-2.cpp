#include <iostream>
#include <string>

using namespace std;

int N;
string seats;

int main() {
    cin >> N;
    cin >> seats;

    // Please write your code here.
    int cnt = 0, diff1 = 0, diff2 = 0, ans1 = 0, ans2 = N;
    if (seats[0] == '0') {
        for (int i = 1; i < N; i++) {
            if (seats[i] == '1') {
                diff1 = i;
                break;
            }
        }
    }
    if (seats[N-1] == '0') {
        for (int i = 1; i < N; i++) {
            if (seats[N-1-i] == '1') {
                diff2 = i;
                break;
            }
        }
    }

    if (diff1 == 0 && diff2 != 0) {
        cnt = 0;
        for (int j = diff1; j < N; j++) {
            if (seats[j] == '1') {
                        ans1 = max(ans1, cnt);
                        if (j > diff1) ans2 = min(ans2, cnt);
                        cnt = 0;
                    }
            else cnt++;
        }
    }
    else if (diff1 != 0 && diff2 == 0) {
        cnt = 0;
        for (int j = 1; j < N - diff2 + 1; j++) {
            if (seats[j] == '1') {
                        ans1 = max(ans1, cnt);
                        if (j > diff1) ans2 = min(ans2, cnt);
                        cnt = 0;
                    }
            else cnt++;
        }
    }
    else if (diff1 == 0 && diff2 == 0) {
        cnt = 0;
        for (int j = diff1; j < N - diff2; j++) {
            if (seats[j] == '1') {
                        ans1 = max(ans1, cnt);
                        if (j > diff1) ans2 = min(ans2, cnt);
                        cnt = 0;
                    }
            else cnt++;
        }
    }
    else {
        cnt = 0;
        for (int j = 1; j < N; j++) {
            if (seats[j] == '1') {
                        ans1 = max(ans1, cnt);
                        if (j > diff1) ans2 = min(ans2, cnt);
                        cnt = 0;
                    }
            else cnt++;
        }
    }

    if (ans1 < ans2) {
        cout << max(diff1, diff2);
    }
    else if (diff1 == 0 && diff2 == 0) {
        if (ans1 % 2 == 0) cout << min(ans1 / 2, ans2 + 1);
        else cout << min(ans1 / 2 + 1, ans2 + 1);
    }
    else if (diff1 != 0 && diff2 == 0) {
        if (diff1 <= ans2) {
            if (ans1 == ans2) {
                if (diff1 < ans2 / 2 + 1) cout << ans2 / 2 + 1;
                else cout << diff1;
            }
            else if (ans1 % 2 == 0) cout << min(ans1 / 2, ans2 + 1);
            else cout << min(ans1 / 2 + 1, ans2 + 1);
        }
        else if (diff1 >= ans1) cout << ans2 + 1;
    }
    else if (diff1 == 0 && diff2 != 0) {
        if (diff2 <= ans2) {
            if (ans1 == ans2) {
                if (diff2 < ans2 / 2 + 1) cout << ans2 / 2 + 1;
                else cout << diff2;
            }
            else if (ans1 % 2 == 0) cout << min(ans1 / 2, ans2 + 1);
            else cout << min(ans1 / 2 + 1, ans2 + 1);
        }
        else if (diff2 >= ans1) cout << ans2 + 1;
    }
    else {
        int diff = max(diff1, diff2);
        if (diff >= ans1) cout << ans2 + 1;
        else if (diff <= ans2) {
            if (ans1 == ans2) {
                if (diff < ans2 / 2 + 1) cout << ans2 / 2 + 1;
                else cout << diff;
            }
            else if (ans1 % 2 == 0) cout << min(ans1 / 2, ans2 + 1);
            else cout << min(ans1 / 2 + 1, ans2 + 1);
        }
    }

    return 0;
}