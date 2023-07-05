#include "../lib.cpp"

void bubbleSort(int arr[], int len) {
    // 1.
    if (len <= 1) return;

    // 2. 5.
    for (int i = 0; i < len - 1; i++)
        // 3.
        if (arr[i] > arr[i + 1])
            // 4.
            swap(arr[i], arr[i + 1]);

    // 6. 
    bubbleSort(arr, len - 1);
}

int main() {
    int len;
    cout << "Masukan panjang: ";
    cin >> len;
    int arr[len];
    
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }
    
    
    printArr(arr, len);
    
    bubbleSort(arr, len);
    
    printArr(arr, len);
}
