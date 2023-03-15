#include "iostream"
using namespace std;

int tambah (int a, int b) {
	return a + b;
}
int kurang (int a, int b) {
	return a - b;
}
int total (int arr[40], int len) {
	int total = 0;
	for (size_t i = 0; i < len; i++)
		total += arr[i];
		
	return total;
}
int rata (int arr[40], int len) {
	return total(arr,len) / len;
}

int main () {
	int a, b, len = 0;
	int arr[40];
	
	cout << "Bilangan pertama: ";
	cin >> a;
	cout << "Bilangan kedua: ";
	cin >> b;
	
	cout << "Masukan jumlah bilangan array: ";
	cin >> len;
	
	for (size_t i = 0; i < len; i++){
		cout << "Array " << i + 1 << ": ";
		cin >> arr[i];
	}
	
	cout << "Hasil tambah: " << tambah (a,b) << endl;
	cout << "Hasil kurang: " << kurang (a,b) << endl;
	cout << "Hasil total: " << total (arr,len) << endl;
	cout << "Hasil rata-rata: " << rata (arr,len) << endl;
}