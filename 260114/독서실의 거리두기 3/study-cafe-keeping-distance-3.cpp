#include <iostream>
#include <string>

using namespace std;

int N;
string seats;

int main() {
    cin >> N;
    cin >> seats;

    // Please write your code here.
    int num1 = 0, num2 = 0, cnt1 = N + 1, cnt2 = 0, ans;
    for (int i = 1; i < N; i++) {
        if (seats[i] == '1') {
            cnt1 = min(cnt1, i - num1);
            num1 = i;
        }
    }

    for (int i = 1; i < N; i++) {
        if (seats[i] == '1') {
            cnt2 = max(cnt2, i - num2);
            num2 = i;
        }
    }

    if (cnt1 > cnt2) ans = cnt1 / 2;
    else ans = cnt2 / 2;

    ans = min(ans, cnt1);
    ans = min(ans, cnt2);

    cout << ans;


    return 0;
}