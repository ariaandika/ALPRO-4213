#include "../lib.cpp"

void merge(int arr[], int kiri, int tengah, int kanan) {
    int panjangKiri = tengah - kiri + 1;
    int panjangKanan = kanan - tengah;

    int arrKiri[panjangKiri], arrKanan[panjangKanan];     

    for (int i = 0; i < panjangKiri; i++)
        arrKiri[i] = arr[kiri + i];

    for (int j = 0; j < panjangKanan; j++)
        arrKanan[j] = arr[tengah + 1 + j];

    int i = 0, j = 0, k = kiri;

    while (i < panjangKiri && j < panjangKanan) {
        if (arrKiri[i] <= arrKanan[j]) {
            arr[k] = arrKiri[i];
            i++;
        }
        else {
            arr[k] = arrKanan[j];
            j++;
        }
        k++;
    }
    
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
}

void mergeSort(int arr[], int kiri, int kanan) {
    if (kiri >= kanan) return;
    
    int tengah = kiri + (kanan - kiri) / 2;

    mergeSort(arr, kiri, tengah);       // A
    mergeSort(arr, tengah + 1, kanan);  // B

    merge(arr, kiri, tengah, kanan);
}

int main() {
    int arr[] = { 4, 7, 2, 8, 3 };
    int len = 5;
    
    printArr(arr, len);
    
    mergeSort(arr, 0, len - 1);
    
    printArr(arr, len);
}
