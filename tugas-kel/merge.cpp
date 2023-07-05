// include hanya untuk printArr
#include "lib.cpp"

void merge(int arr[], int kiri, int tengah, int kanan) {
    // kita tentukan panjang subarray
    int panjangKiri = tengah - kiri + 1;
    int panjangKanan = kanan - tengah;

    // buat subarray kosong kiri dan kanan sesuai panjang yang ditentukan
    int arrKiri[panjangKiri], arrKanan[panjangKanan];     

    // isi subarray kiri dari array asli
    for (int i = 0; i < panjangKiri; i++)
        arrKiri[i] = arr[kiri + i];

    // isi subarray kanan dari array asli
    for (int j = 0; j < panjangKanan; j++)
        arrKanan[j] = arr[tengah + 1 + j];

    // index penanda subarray kiri
    int i = 0;
    // index penanda subarray kanan
    int j = 0;
    // index penanda array akhir
    int k = kiri;

    // loop sampai salah satu subarray habis
    while (i < panjangKiri && j < panjangKanan) {
        // jika elemen subarray kiri lebih kecil dari elemen subarray kanan
        if (arrKiri[i] <= arrKanan[j]) {
            // letakan elemen ke array akhir
            arr[k] = arrKiri[i];
            
            // lanjutkan penanda kiri ke elemen selanjutnya
            i++;
        }
        else {
            // letakan elemen ke array akhir
            arr[k] = arrKanan[j];

            // lanjutkan penanda kanan ke elemen selanjutnya
            j++;
        }
        
        // selalu tambahkan penanda array akhir ke elemen selanjutnya
        k++;
    }

    // jika salah satu subarray sudah habis, dan subarray lainya masih ada,
    // letakkan semuanya ke array akhir
    
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
    // tujuan: membagi array menjadi dua subarray
    // sorting dua subarray tersebut, lalu gabungkan kembali
    // lalu sorting dengan subarray lainya, dan seterusnya
    
    // basis, berhenti ketika panjang subarray 0
    if (kiri >= kanan) return;
    
    // index penengah untuk membagi menjadi dua array
    int tengah = kiri + (kanan - kiri) / 2;

    // bagi lagi subarray kiri menjadi lebih kecil
    mergeSort(arr, kiri, tengah);
    // bagi lagi subarray kanan menjadi lebih kecil
    mergeSort(arr, tengah + 1, kanan);

    // ketika kedua subarray sudah terbagi, kita mulai sorting
    merge(arr, kiri, tengah, kanan);
}

int main() {
    int arr1[] = {24, 37, 27, 41, 84, 38, 3, 48, 66, 41, };
    int arr2[] = {64, 0, 32, 30, 63, 57, 52, 17, 95, 94, };
    int arr3[] = {89, 51, 60, 54, 3, 39, 66, 14, 91, 49, };
    int arr4[] = {16, 93, 59, 57, 24, 22, 30, 68, 99, 82, };

    int n = 10;

    cout << "Array sebelum disorting: " << endl;
    printArr(arr1, n);
    printArr(arr2, n);
    printArr(arr3, n);
    printArr(arr4, n);

    mergeSort(arr1, 0, 9);
    mergeSort(arr2, 0, 9);
    mergeSort(arr3, 0, 9);
    mergeSort(arr4, 0, 9);

    cout << "Array setelah disorting: " << endl;
    printArr(arr1, n);
    printArr(arr2, n);
    printArr(arr3, n);
    printArr(arr4, n);

    return 0;
}