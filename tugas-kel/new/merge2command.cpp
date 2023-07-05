#include "../lib.cpp"

void merge(int arr[], int kiri, int tengah, int kanan) {
    // 7.
    int panjangKiri = tengah - kiri + 1;
    int panjangKanan = kanan - tengah;
    int arrKiri[panjangKiri], arrKanan[panjangKanan];     

    for (int i = 0; i < panjangKiri; i++)
        arrKiri[i] = arr[kiri + i];

    for (int j = 0; j < panjangKanan; j++)
        arrKanan[j] = arr[tengah + 1 + j];

    // 8.
    int i = 0, j = 0, k = kiri;

    // 9.
    while (i < panjangKiri && j < panjangKanan) {
        // 10.
        if (arrKiri[i] <= arrKanan[j]) {
            // 11.
            arr[k] = arrKiri[i];
            i++;
        }
        else {
            arr[k] = arrKanan[j];
            j++;
        }
        k++;
    }
    
    // 12.
    while (i < panjangKiri) {
        arr[k] = arrKiri[i];
        i++;
        k++;
    }

    while (j < panjangKanan) {
        arr[k] = arrKanan[j];
        j++;
        k++;
    }

    // 13.
}

void mergeSort(int arr[], int kiri, int kanan) {
    // 1.
    if (kiri >= kanan) return;
    
    // 2.
    int tengah = kiri + (kanan - kiri) / 2;
    
    // 3. 4.
    mergeSort(arr, kiri, tengah);
    // 5.
    mergeSort(arr, tengah + 1, kanan);

    // 6.
    merge(arr, kiri, tengah, kanan);
}

int main() {
    int arr[] = { 4, 7, 2, 8, 3 };
    int len = 5;
    
    printArr(arr, len);
    
    mergeSort(arr, 0, len - 1);
    
    printArr(arr, len);
}
