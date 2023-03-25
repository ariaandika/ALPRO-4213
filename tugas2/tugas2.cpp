#include "iostream"

using namespace std;

bool isEven(int x) {
	return x % 2 == 0;
}
bool isOdd(int x) {
	return x % 2 == 1;
}
bool isFactor(int x, int f) {
	return x % f == 0;
}
int Max(int a, int b){
	return a > b ? a : b;
}
int Min(int a, int b){
	return a < b ? a : b;
}
int MaxArray(int a[10]) {
	int out = 0;
	for (int i = 0; i < 10; i++)
		out = Max(out,a[i]);
	return out;
}
int MinArray(int a[10]){
	int out = 10000;
	for (int i = 0; i < 10; i++)
		out = Min(out,a[i]);
	return out;
}
int SumEven(int a[10]){
	int sum = 0;
	for (int i = 0; i < 10; i++){
		if (isEven(a[i]))
			sum += a[i];
	}
	return sum;
}
int SumOdd(int a[10]){
	int sum = 0;
	for (int i = 0; i < 10; i++){
		if (isOdd(a[i]))
			sum += a[i];
	}
	return sum;
}
int Swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int isFound(int a[10], int x) {
	for (int i = 0; i < 10; i++) {
		if (a[i] == x) return true;
	}
	return false;
}
int main(){
	cout << "5 adalah genap: " << isEven(5) << endl;
	cout << "8 adalah genap: " << isEven(8) << endl;
	cout << "5 adalah ganjil: " << isOdd(5) << endl;
	cout << "8 adalah ganjil: " << isOdd(8) << endl;
	
	cout << "4 adalah faktor 8: " << isFactor(8,4) << endl;
	cout << "5 adalah faktor 8: " << isFactor(8,5) << endl;
	
	int array[10] = { 1, 6, 4, 8, 3, 2, 5, 9, 7, 0 };
	
	cout << "Array: ";
	for (int i = 0; i < 10; i++) {
		cout << array[i] << ", ";
	}
	cout << "\nMax Array: " << MaxArray(array) << endl;
	cout << "Min Array: " << MinArray(array) << endl;
	cout << "Sum Even: " << SumEven(array) << endl;
	cout << "Sum Odd: " << SumOdd(array) << endl;
	
	int x = 5;
	int y = 8;
	cout << "Sebelumnya: x = " << x << "  y = " << y << endl;
	
	Swap(&x, &y);
	cout << "Setelah di swap: x = " << x << "  y = " << y << endl;
	
	cout << "isFound 5: " << isFound(array, 5) << endl;
	cout << "isFound 12: " << isFound(array, 12) << endl;
}