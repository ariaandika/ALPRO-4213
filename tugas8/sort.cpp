#include "iostream"

using namespace std;

void printArr(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}
 
void quickSort(int arr[], int min, int max) {
    int pivotIdx = arr[(min + max) / 2];
    int kiri = min,kanan = max;

    while (kiri <= kanan) {
 
        while (arr[kiri] < pivotIdx) kiri++;
        while (arr[kanan] > pivotIdx) kanan--;
 
        if (kiri <= kanan) swap(arr[kiri++], arr[kanan--]);
    }
 
    if (min < kanan) quickSort(arr, min, kanan);
    if (kiri < max) quickSort(arr, kiri, max);
}

int main() {
    int arr[] = { 1, 4, 6, 7, 2 };
    int arr2[] = { 1, 4, 6, 7, 2 };
    int len = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, 0, len - 1);
    bubbleSort(arr2, len);

    cout << "Quick sort: ";
    printArr(arr, len);
    cout << "Bubble sort: ";
    printArr(arr2, len);
}
