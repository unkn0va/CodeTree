#include <iostream>
#include <climits>

using namespace std;

int N;
int x[100];
int y[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    int val, ans = INT_MIN; 
    for (int i = 0; i < N-2; i++) {
        for (int j = i+1; j < N-1; j++) {
            for (int k = j+1; k < N; k++) {
                if ((x[i] != x[j] && x[j] != x[k]) || (y[i] != y[j] && y[j] != y[k])) continue;

                if (x[i] == x[j]) {
                    if (y[i] == y[k]) {
                        val = abs(y[j]-y[i]) * abs(x[i]-x[k]);
                    }
                    else if (y[j] == y[k]) {
                        val = abs(y[j]-y[i]) * abs(x[j]-x[k]);
                    }
                    else val = 0;
                }
                else if (x[i] == x[k]) {
                    if (y[i] == y[j]) {
                        val = abs(y[k]-y[i]) * abs(x[i]-x[j]);
                    }
                    else if (y[k] == y[j]) {
                        val = abs(y[k]-y[i]) * abs(x[k]-x[j]);
                    }
                    else val = 0;
                }
                else if (x[j] == x[k]) {
                    if (y[j] == y[i]) {
                        val = abs(y[j]-y[k]) * abs(x[i]-x[j]);
                    }
                    else if (y[k] == y[i]) {
                        val = abs(y[j]-y[k]) * abs(x[k]-x[i]);
                    }
                    else val = 0;
                }

                ans = max(val, ans);
            }
        }
    }

    cout << ans;

    return 0;
}