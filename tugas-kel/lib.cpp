
#include "iostream"

using namespace std;

void printArr(int arr[],int len) {
  for (int i = 0; i < len; i++)
    cout << arr[i] << " ";
  cout << endl;
}

void swap(int& a, int& b) {
	int t = a;
	a = b;
	b = t;
}