#include "../lib.cpp"

int cariElemenTerkecil(int arr[], int indexTerkecil, int c, int len) {
    // 4.
    if (c >= len)
        return indexTerkecil;

    // 5.
    if (arr[c] < arr[indexTerkecil])
        // 6.
        indexTerkecil = c;
    // 7.
    return cariElemenTerkecil(arr, indexTerkecil, c+1, len);
}

void selection(int arr[], int len) {
    // 1.
    for (int i = 0; i < len - 1; i++) {
        // 2.               // 3. 
        int indexTerkecil = cariElemenTerkecil(arr, i, i+1, len);

        // 8.
        swap(arr[indexTerkecil], arr[i]);

        // 9.
    }

}

int main() {
    int arr[] = { 4, 7, 2, 8, 3 };
    int len = 5;
    
    printArr(arr, len);
    
    selection(arr, len);
    
    printArr(arr, len);
}
