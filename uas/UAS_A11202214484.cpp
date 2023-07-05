/**
Nama: Aria Putra Andika
Nim: A11.2022.14484
Kelompok: 4213
*/
#include "iostream"

using namespace std; 

struct Mhs {
    string nama, nim;
    float score[5];

    void printData() {
        cout << "Nama: " << nama << endl;
        cout << "Nim: " << nim << endl;
        for (int i = 0; i < 5; i++) {
           cout << "Nilai: " << score[i] << endl;
        }
    }
    void swapData(float* a1, float* a2) {
        float temp = *a1;
        *a1 = *a2;
        *a2 = temp;
    }
    float sumScore(float* arr, int len) {
        if (len <= 0) return 0;
        return sumScore(arr, len - 1) + arr[len - 1];
    }
    void sortScore(float* arr, int len) {
        if (len <= 1) return;

        for (int i = 0; i < len - 1; i++)
            if (arr[i] > arr[i + 1])
                swap(arr[i], arr[i + 1]);

        sortScore(arr, len - 1);
    }
};

int main(){
    cout << "Program Data Mahasiswa" << endl;
    // Declare ml
    Mhs ml = {"wkwk", "A11.2222", {90,91,99,75,80} };
    cout << "Before swap" << endl;
    ml.printData();

    // After swap first and last element
    cout << endl << "After swap" << endl;
    ml.swapData(&ml.score[0], &ml.score[4]);
    ml.printData();

    // Average
    int n = sizeof(ml.score)/sizeof(ml.score[0]);
    cout << "Nilai rata-rata: " << ml.sumScore(ml.score, n)/n << endl;

    // Sort
    cout << endl << "After Sort" << endl;
    ml.sortScore(ml.score, n);
    ml.printData();
}
