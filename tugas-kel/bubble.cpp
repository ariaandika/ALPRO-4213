#include "lib.cpp"

void bubbleSort(int arr[], int len) {
    if (len <= 1) return;

    for (int i = 0; i < len - 1; i++)
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);

    bubbleSort(arr, len - 1);
}

















void bubbleSortNcie(int arr[], int len) {
    // tujuan: mensorting semua array, lalu kecilkan menjadi subarray 
    // dengan mengecilkan index depan dan belakang
    // dan sorting lagi sampai subarray kosong
    
    // basis, berhenti ketika panjang subarray tersisa satu elemen
    if (len <= 1) return;
    
    // sort untuk subarray
    bubbleSort(arr, len);
    
    // rekuren, sort lagi dengan subarray yang lebih pendek
    // dengan mengurangi panjang array
    // bubbleSort(arr, len - 1);
}













int main() {
    // int arr1[] = {24, 37, 27, 41, 84, 38, 3, 48, 66, 41, };
    // int arr2[] = {64, 0, 32, 30, 63, 57, 52, 17, 95, 94, };
    // int arr3[] = {89, 51, 60, 54, 3, 39, 66, 14, 91, 49, };
    // int arr4[] = {16, 93, 59, 57, 24, 22, 30, 68, 99, 82, };

    int arr1[] = {53, 25, 18, 43, 10, 91, 31 };
    int arr2[] = {94, 12, 30, 75, 56, 72, 22 };
    int arr3[] = {40, 99, 64, 85, 87, 3, 17 };
    int n = 7;

    cout << "Array sebelum disorting: " << endl;
    printArr(arr1, n);
    printArr(arr2, n);
    printArr(arr3, n);
    // printArr(arr4, n);

    bubbleSort(arr1, n);
    bubbleSort(arr2, n);
    bubbleSort(arr3, n);
    // bubbleSort(arr4, n);

    cout << "Array setelah disorting: " << endl;
    printArr(arr1, n);
    printArr(arr2, n);
    printArr(arr3, n);
    // printArr(arr4, n);

    return 0;
}