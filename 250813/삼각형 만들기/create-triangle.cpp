#include <iostream>
#include <climits>
#include <cmath>

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
                int a = (x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]);
                int b = (x[j]-x[k])*(x[j]-x[k]) + (y[j]-y[k])*(y[j]-y[k]);
                int c = (x[i]-x[k])*(x[i]-x[k]) + (y[i]-y[k])*(y[i]-y[k]);

                if (a == b+c) val = sqrt(b)*sqrt(c);
                else if (b == a+c) val = sqrt(a)*sqrt(c);
                else if (c == a+b) val = sqrt(a)*sqrt(b);
                else val = 0;

                ans = max(val, ans);
            }
        }
    }

    cout << ans;

    return 0;
}