#include <iostream>

using namespace std;

int n;
int arr[100000];
int temp[100000];

void merge(int arr[], int low, int mid,  int high);

void mergeSort(int arr[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}

void merge(int arr[], int low, int mid, int high) {
    int i = low, j = mid+1;
    int k = low;

    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            k += 1, i += 1;
        }
        else {
            temp[k] = arr[j];
            k += 1, j += 1;
        }
    }

    while (i <= mid) {
        temp[k] = arr[i];
        k += 1, i += 1;
    }

    while (j <= high) {
        temp[k] = arr[j];
        k += 1, j += 1;
    }

    for (int idx = low; idx <= high; idx++) {
        arr[idx] = temp[idx];
    }

}
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
