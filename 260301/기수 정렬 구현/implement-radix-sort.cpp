#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int n;
int arr[100000];

int getDigit(int a, int pos) {
    if (pos == 0) return a % 10; 
    return (a/(int)pow(10, pos)) % 10;
}

int main() {
    int maxDigit = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        int len = to_string(arr[i]).length();
        maxDigit = max(len, maxDigit);
    }

    // Please write your code here.
    for (int i = 0; i < maxDigit; i++) {
        vector<int> arr_new[10];
        for (int j = 0; j < n; j++) {
            int digit = getDigit(arr[j], i);
            arr_new[digit].push_back(arr[j]);
        }
        int idx = 0;
        for (int j = 0; j < 10; j++) {
            for (int num : arr_new[j])
                arr[idx++] = num;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
