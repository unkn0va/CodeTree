#include <iostream>
#include <climits>

using namespace std;

int n;
int numbers[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    // Please write your code here.
    int sum, ans = INT_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = i+2; j < n; j++) {
            sum = numbers[i] + numbers[j];
            ans = max(sum, ans);
            sum = 0;
        }
    }

    cout << ans;

    return 0;
}