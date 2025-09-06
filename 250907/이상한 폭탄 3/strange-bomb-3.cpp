#include <iostream>

using namespace std;

int N, K;
int num[100];

int main() {
    cin >> N >> K;

    int max_val = 0;
    for (int i = 0; i < N; i++) {
        cin >> num[i];
        max_val = max(num[i], max_val);
    }

    // Please write your code here.
    int arr[1000000] = {};
    bool check[100];

    for (int i = 0; i < N; i++) {
        check[i] = true;
    }

    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {
            if (num[i] == num[j] && j-i <= K && check[j]) {
                arr[num[i]]++;
                check[j] = false;
            } 
        }   
    }

    int ans = 0;

    for (int i = 0; i < max_val; i++) {
        if (arr[i] >= ans) ans = i;
    }

    cout << ans;

    return 0;
}