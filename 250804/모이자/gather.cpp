#include <iostream>
#include <climits>
//#include <algorithm>

using namespace std;

int n;
int A[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    int min_val = INT_MAX, sum;
    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = 0; j < n; j++) {
            sum += (abs(i-j) * A[j]);
        }

        if (sum < min_val) min_val = sum;
    }

    cout << min_val;
    
    return 0;
}