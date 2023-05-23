#include "iostream"
using namespace std;

bool ganjil(int x) {
    return x % 2 == 1;
}

void minArr(int arr[], int len) {
    int temp = arr[0];
    for (int i = 1;i < len;i++)
        temp = ganjil(arr[i]) ? temp : arr[i];

    if (!ganjil(temp)) 
        cout << temp; 
    else 
        cout << "tidak ada genap";

    cout << endl;
}

int main() {
    int arr[] = {6,7,4,3,2};
    int len = sizeof(arr)/sizeof(arr[0]);
    minArr(arr, len);
}
