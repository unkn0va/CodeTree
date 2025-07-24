#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    for (int j = 0; j < n; j+=2) {
        sort(arr, arr+j+1);
        cout << arr[j/2] << " ";
    }
    return 0;
}