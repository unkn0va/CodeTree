#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int nums[15];

int main() {
    int max_val = INT_MIN;
    for (int i = 0; i < 15; i++) {
        cin >> nums[i];
        max_val = max(nums[i], max_val);
    }

    // Please write your code here.
    sort(nums, nums+15);
    bool check;
    for (int i = 1; i <= 40; i++) {
        for (int j = 1; j <= 40; j++) {
            for (int k = 1; k <= 40; k++) {
                check = true;
                int l = max_val - i - j - k;
                int value[15] = {i, j, k, l, i+j, i+k, i+l, j+k, j+l, k+l, i+j+k, i+j+l, i+k+l, j+k+l, i+j+k+l};

                sort(value, value+15);

                for (int t = 0; t < 15; t++) {
                    if (value[t] != nums[t]) {
                        check = false;
                        break;
                    }
                }

                if (check == true) {
                    cout << i << " " << j << " " << k << " " << l;
                    return 0;
                }
            }
        }
    }

    return 0;
}