#include <iostream>
#include <algorithm>

using namespace std;

int N;
int nums[2000], sums[1000];

int main() {
    cin >> N;

    for (int i = 0; i < 2 * N; i++) {
        cin >> nums[i];
    }

    // Please write your code here.
    sort(nums, nums + 2*N);
    for (int j = 0; j < N; j++) {
        sums[j] = nums[j] + nums[2*N-j-1];
    }
    sort (sums, sums+N);
    
    cout << sums[N-1];
    return 0;
}
