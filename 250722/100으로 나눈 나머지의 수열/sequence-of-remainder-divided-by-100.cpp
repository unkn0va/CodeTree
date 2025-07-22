#include <iostream>

using namespace std;

int N;

int arr[100];

int main() {
    cin >> N;
    
    // Please write your code here.
    arr[0] = 2, arr[1] = 4;
    for (int i=2;i<N;i++) {
       arr[i] = arr[i-2] * arr[i-1] % 100;
    }
    cout << arr[N-1];
    return 0;
}