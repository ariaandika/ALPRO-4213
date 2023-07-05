// include hanya untuk printArr dan swap
#include "lib.cpp"

int cariElemenTerkecil(int arr[], int indexTerkecil, int j, int len) {
    // 6.
    if (j >= len)
        return indexTerkecil;

    // 4.
    if (arr[j] < arr[indexTerkecil])
        // 5. 
        indexTerkecil = j;
    
    
    // 7.
    return cariElemenTerkecil(arr, indexTerkecil, j+1, len);
}

void selection(int arr[], int len) {

    // 1.
    for (int i = 0; i < len - 1; i++) {
        // 2.				// 3.
        int indexTerkecil = cariElemenTerkecil(arr, i, i+1, len);
        
        // 8.
        swap(arr[indexTerkecil], arr[i]);
        
        // 9.
    }
}

int main() {
    int arr[]  = {47, 3, 95, 34, 60, 5, 27 };
    int arr2[] = {97, 2, 62, 46, 89, 47, 88 };
    int arr3[] = {43, 2, 39, 7, 71, 10, 24 };
    int arr4[] = {64, 11, 62, 14, 6, 93, 89 };
    
    cout << "Array sebelum disorting: " << endl;
    printArr(arr, 7);
    printArr(arr2, 7);
    printArr(arr3, 7);
    printArr(arr4, 7);

    selection(arr, 7);
    selection(arr2, 7);
    selection(arr3, 7);
    selection(arr4, 7);
    
    cout << "Array setelah disorting: " << endl;
    printArr(arr, 7);
    printArr(arr2, 7);
    printArr(arr3, 7);
    printArr(arr4, 7);
}