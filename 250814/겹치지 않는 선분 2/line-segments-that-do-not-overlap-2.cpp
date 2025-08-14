#include <iostream>

using namespace std;

int N;
int x1[100], x2[100];

int main() {
    cin >> N;
    int a[100] = {}, check[100] = {};

    for (int i = 0; i < N; i++) {
        cin >> x1[i] >> x2[i];
    }

    // Please write your code here.
    int cnt = 0;
    for (int i = 0; i < N-1; i++) {
        for (int j = i+1; j < N; j++) {
            /*
            if (x1[i] > x2[i]) {
                if (x1[j] < x2[j]) {
                    if (x1[i] > x1[j] && x2[i] < x2[j]) {
                        check[i] = 1, check[j] = 1;
                    }
                }
                else {

                }
            }
            */
            if (x1[i] > x1[j] && x2[i] < x2[j]) {
                check[i] = 1, check[j] = 1;
            }
            else if (x1[i] < x1[j] && x2[i] > x2[j]) {
                check[i] = 1, check[j] = 1;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        if (check[i] == 0) cnt++;
    }
    cout << cnt;
    

    return 0;
}