#include <iostream>
#include <climits>

using namespace std;

int X, Y;

int main() {
    cin >> X >> Y;

    // Please write your code here.
    int sum = 0, ans = INT_MIN;
    for (int i = X; i <= Y; i++) {
        sum = 0;
        if (i < 10) {
            sum += i;
        }
        else if (i < 100) {
            sum += (i / 10) + (i % 10); 
        }
        else if (i < 1000) {
            sum += (i / 100) + ((i / 10) % 10) + (i % 10);
        }
        else if (i < 10000) {
            sum += (i / 1000) + ((i / 100) % 10) + ((i / 10) % 10) + (i % 10);
        }
        else sum += 1;

        ans = max(ans, sum);
    }

    cout << ans;

    return 0;
}