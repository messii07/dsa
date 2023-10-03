#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r) {
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int leftArr[n1];  // Changed arr to leftArr
    int rightArr[n2]; // Changed arr to rightArr

    for (int i = 0; i < n1; i++) {
        leftArr[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++) {
        rightArr[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2) {
        if (leftArr[i] < rightArr[j]) {
            arr[k] = leftArr[i];
            k++;
            i++;
        } else {
            arr[k] = rightArr[j];
            k++;
            j++;
        }
    }

    while (i < n1) {
        arr[k] = leftArr[i];
        k++;
        i++;
    }

    while (j < n2) {
        arr[k] = rightArr[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
