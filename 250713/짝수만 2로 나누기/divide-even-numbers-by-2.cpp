#include <iostream>

using namespace std;

int n;
int arr[50];

void even(int x[]) {
    for (int i = 0; i < n; i++) {
        if (x[i] % 2 == 0) x[i] /= 2;
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    even(arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}